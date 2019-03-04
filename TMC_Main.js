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

function Display_JSONContent()
{
	//alert("Hello there!!");
	
	//usage:
	readTextFile("TMC_Index.json", function(text){
	var start = new Date().getTime();	
    var data = JSON.parse(text);
    
	var k=0;
	 var arr=[];
	

	for (var i = 0; i < data.length; i++)
	{
		var obj = data[i];
		if(obj.Type=="VPMReference" && obj.Status=="Update OK")
		{
			arr.push(obj.Index);
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
	console.log(arr.sort());
	
	var time = end - start;
	alert('Execution time: ' + time);
	
	alert("The no of Instances updated are "+k+ " "+arr.length);
	
	NewArr=[100,101,201,301,421,600,876,2075,3001,4567];
	
	var executed=false;
	// CREATE DYNAMIC TABLE.
	var table = document.createElement("table");
			
	// CREATE HTML TABLE HEADER ROW USING THE EXTRACTED HEADERS ABOVE.

	var tr = table.insertRow(-1);                   // TABLE ROW.
	var start2 = new Date().getTime();
	for(var i=0; i<NewArr.length; i++)
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
		alert("Element : "+NewArr[i]+" fileName:"+objfile+" Index : "+ index);
		
		
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
		
	}
	// FINALLY ADD THE NEWLY CREATED TABLE WITH JSON DATA TO A CONTAINER.
			var divContainer = document.getElementById("showData");
			divContainer.innerHTML = "";
			divContainer.appendChild(table);
	var end2 = new Date().getTime();
	
	var time2 = end2 - start2;
	console.log("time taken : "+time2);
	});
}

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

