function Message()
{
	//usage:
	readTextFile("ObjectLight_1.json", function(text){
	var start = new Date().getTime();	

    var data = JSON.parse(text);
    
	var col = [];
        for (var i = 0; i < data.length; i++) {
            for (var key in data[i]) {
                if (col.indexOf(key) === -1) {
                    col.push(key);
                }
            }
        }
		
		// CREATE DYNAMIC TABLE.
        var table = document.createElement("table");
		
		// CREATE HTML TABLE HEADER ROW USING THE EXTRACTED HEADERS ABOVE.

        var tr = table.insertRow(-1);                   // TABLE ROW.

        for (var i = 0; i < col.length; i++) {
            var th = document.createElement("th");      // TABLE HEADER.
            th.innerHTML = col[i];
            tr.appendChild(th);
        }

        // ADD JSON DATA TO THE TABLE AS ROWS.
        for (var i = 0; i < data.length; i++) {

            tr = table.insertRow(-1);

            for (var j = 0; j < col.length; j++) {
                var tabCell = tr.insertCell(-1);
                tabCell.innerHTML = data[i][col[j]];
            }
        }
		
		// FINALLY ADD THE NEWLY CREATED TABLE WITH JSON DATA TO A CONTAINER.
        var divContainer = document.getElementById("showData");
        divContainer.innerHTML = "";
        divContainer.appendChild(table);
		
		var end = new Date().getTime();
	
	var time = end - start;
	
	alert("The no of Instances Upte Date are " + data.length +" " + time);
	});
}

// Load JSON text from server hosted file and return JSON parsed object
function Display_JSONContent() {
  // Load json file;
  var json = loadTextFileAjaxSync("TMC_Index.json", "application/json");
  // Parse json
  var start = new Date().getTime();	
  var data = JSON.parse(json);
  
  var k=0;
	 var NewArr=[];
	

	for (var i = 0; i < data.length; i++)
	{
		var obj = data[i];
		if(obj.Type=="VPMReference" && obj.Status=="Update OK")
		{
			NewArr.push(obj.Index);
			k++;
		}
	//	for (var key in obj)
	//	{
	//		var attrName = key;
	//		var attrValue = obj[key];
		
	//		console.log(attrName+" "+attrValue);
	//	}
	}
	var end = new Date().getTime();
	console.log(NewArr);
	
	var time = end - start;
	//alert('Execution time: ' + time);
	console.log("Time to read index.json : "+time);
	
	alert("The no of Instances updated are "+k+ " "+NewArr.length);
	
//	NewArr=[1,101,201,301,401,5,4];
	NewArr=[1,101,201,301,408,501,601,701,876,901,1001,1101,1201,1301,1401,1501,1601,1701,1801,1901,2001,2101,2201,2301,2401,2501,2601,2701,2801,2901,3001,3101,3201,3301,3401,3501,3601,3701,3801,3901,4001,4101,4201,4301,4401,4501,4601,4701,4801,4901,5001,5101,5201,5301,5401,5501,5601,5701,5801,5901,6001,6101,6201,6301,6401,6501,6601,6701,6801,6901,7001,7202,7201,7301,7401,7501,7601,7701,7801,7901,8001,8101,8201,8301,8401,8501,8601,8701,8801,8901,9001,9101,9201,9301,9401,9501,9601,9701,9801,9901];
	
	var executed=false;
	// CREATE DYNAMIC TABLE.
	var table = document.createElement("table");
			
	// CREATE HTML TABLE HEADER ROW USING THE EXTRACTED HEADERS ABOVE.

	var tr = table.insertRow(-1);                   // TABLE ROW.
	var start2 = new Date().getTime();
	for(var i=0; i<100; i++)
	{
		if(NewArr[i] <=10000)
		{
			var trans;
			var index;
			var tmp;
			tmp = NewArr[i] / 100 ;
			
			if(Number.isInteger(tmp))
			{
				trans = tmp ;
				index = (NewArr[i] % 100)+99;
			}
			else
			{
				trans= parseInt(tmp);
				trans+=1;
				index = (NewArr[i] % 100) -1;
			}
		//	alert("Transaction Number: " +trans);
			 
			var objfile;
			objfile = "ObjectLight_"+trans+".json";
		//	alert("Element : "+NewArr[i]+" fileName:"+objfile+" Index : "+ index);
			
			
			//usage:
			var json = loadTextFileAjaxSync(objfile, "application/json");
				
		
			var objdata = JSON.parse(json);
			
			var col = [];
				for (var l = 0; l < objdata.length; l++) {
					for (var key in objdata[l]) {
						if (col.indexOf(key) === -1) {
							col.push(key);
						}
					}
				}
				

				if(!executed)
				{
					executed=true;
					for (var m = 0; m < col.length; m++) {
						var th = document.createElement("th");      // TABLE HEADER.
						th.innerHTML = col[m];
						tr.appendChild(th);
					}
				}
				// ADD JSON DATA TO THE TABLE AS ROWS.
			//	for (var i = 0; i < objdata.length; i++) {

					tr = table.insertRow(-1);
					
					for (var j = 0; j < col.length; j++) {
						var tabCell = tr.insertCell(-1);
						tabCell.innerHTML = objdata[99][col[j]];
					}
			//		alert("Index : "+index);
			//	}
				
				
			
		}
		
	}
	// FINALLY ADD THE NEWLY CREATED TABLE WITH JSON DATA TO A CONTAINER.
			var divContainer = document.getElementById("showData");
			divContainer.innerHTML = "";
			divContainer.appendChild(table);
	var end2 = new Date().getTime();
	
	var time2 = end2 - start2;
	console.log("time taken to display objects from objLight json : "+time2);
	
	
}   

// Load text with Ajax synchronously: takes path to file and optional MIME type
function loadTextFileAjaxSync(filePath, mimeType)
{
  var xmlhttp=new XMLHttpRequest();
  xmlhttp.open("GET",filePath,false);
  if (mimeType != null) {
    if (xmlhttp.overrideMimeType) {
      xmlhttp.overrideMimeType(mimeType);
    }
  }
  xmlhttp.send();
  if (xmlhttp.status==200)
  {
    return xmlhttp.responseText;
  }
  else {
    // TODO Throw exception
    return null;
  }
}

/*function Display_JSONContent()
{
	//alert("Hello there!!");
	
	//usage:
	readTextFile("TMC_Index.json", function(text){
	var start = new Date().getTime();	
    var data = JSON.parse(text);
    
	var k=0;
	 var NewArr=[];
	

	for (var i = 0; i < data.length; i++)
	{
		var obj = data[i];
		if(obj.Type=="VPMReference" && obj.Status=="Update OK")
		{
			NewArr.push(obj.Index);
			k++;
		}
	//	for (var key in obj)
	//	{
	//		var attrName = key;
	//		var attrValue = obj[key];
		
	//		console.log(attrName+" "+attrValue);
	//	}
	}
	var end = new Date().getTime();
	console.log(NewArr.sort());
	
	var time = end - start;
	//alert('Execution time: ' + time);
	console.log("Time to read index.json : "+time);
	
	alert("The no of Instances updated are "+k+ " "+NewArr.length);
	
	NewArr=[1,101,201,301,408,501,601,701,876,901,1001,1101,1201,1301,1401,1501,1601,1701,1801,1901,2001,2101,2201,2301,2401,2501,2601,2701,2801,2901,3001,3101,3201,3301,3401,3501,3601,3701,3801,3901,4001,4101,4201,4301,4401,4501,4601,4701,4801,4901,5001,5101,5201,5301,5401,5501,5601,5701,5801,5901,6001,6101,6201,6301,6401,6501,6601,6701,6801,6901,7001,7202,7201,7301,7401,7501,7601,7701,7801,7901,8001,8101,8201,8301,8401,8501,8601,8701,8801,8901,9001,9101,9201,9301,9401,9501,9601,9701,9801,9901];
	
//	NewArr=[1,101,201,301,401,5,4];
	
	var executed=false;
	// CREATE DYNAMIC TABLE.
	var table = document.createElement("table");
			
	// CREATE HTML TABLE HEADER ROW USING THE EXTRACTED HEADERS ABOVE.

	var tr = table.insertRow(-1);                   // TABLE ROW.
	var start2 = new Date().getTime();
	for(var i=0; i<NewArr.length; i++)
	{
	//	if(NewArr[i] <=10000)
	//	{
			var trans;
			var index;
			var tmp;
			tmp = NewArr[i] / 100 ;
			
			if(Number.isInteger(tmp))
			{
				trans = tmp ;
				index = (NewArr[i] % 100)+99;
			}
			else
			{
				trans= parseInt(tmp);
				trans+=1;
				index = (NewArr[i] % 100) -1;
			}
		//	alert("Transaction Number: " +trans);
			 
			var objfile;
			objfile = "ObjectLight_"+trans+".json";
		//	alert("Element : "+NewArr[i]+" fileName:"+objfile+" Index : "+ index);
			
			
			//usage:
			readTextFile(objfile, function(objtext){
				
		
			var objdata = JSON.parse(objtext);
			
			var col = [];
				for (var l = 0; l < objdata.length; l++) {
					for (var key in objdata[l]) {
						if (col.indexOf(key) === -1) {
							col.push(key);
						}
					}
				}
				

				if(!executed)
				{
					executed=true;
					for (var m = 0; m < col.length; m++) {
						var th = document.createElement("th");      // TABLE HEADER.
						th.innerHTML = col[m];
						tr.appendChild(th);
					}
				}
				// ADD JSON DATA TO THE TABLE AS ROWS.
			//	for (var i = 0; i < objdata.length; i++) {

					tr = table.insertRow(-1);
					
					for (var j = 0; j < col.length; j++) {
						var tabCell = tr.insertCell(-1);
						tabCell.innerHTML = objdata[index][col[j]];
					}
			//		alert("Index : "+index);
			//	}
				
				
			});
		//}
		
	}
	// FINALLY ADD THE NEWLY CREATED TABLE WITH JSON DATA TO A CONTAINER.
			var divContainer = document.getElementById("showData");
			divContainer.innerHTML = "";
			divContainer.appendChild(table);
	var end2 = new Date().getTime();
	
	var time2 = end2 - start2;
	console.log("time taken to display objects from objLight json : "+time2);
	});
}
*/
function readTextFile(file, callback) {
    var rawFile = new XMLHttpRequest();
    rawFile.overrideMimeType("application/json");
    rawFile.open("GET", file, true);
    rawFile.onreadystatechange = function() {
        if (rawFile.readyState === 4 && rawFile.status == "200") {
            callback(rawFile.responseText);
        }
    }
    rawFile.send(null);
}
