function Message()
{
	alert("DS");
	
	//usage:
	readTextFile("ObjectLight.json", function(text){
//	var start = new Date().getTime();	
    var data = JSON.parse(text);
    var k=1;
	for (var i = 0; i < data.length; i++)
	{
		var obj = data[i];
		
		for (var key in obj)
		{ 
			var attrName = key;
			var attrValue = obj[key];
			
	//		console.log(attrName+" "+attrValue);
		}
		
	}
//	var end = new Date().getTime();
//	console.log(arr.sort());
	
//	var time = end - start;
//	alert('Execution time: ' + time);
	
	alert("The no of Instances updated are "+data.length);
	});
}

function Display_JSONContent()
{
	alert("Hello there!!");
	
	//usage:
	readTextFile("TMC_Index.json", function(text){
	var start = new Date().getTime();	
    var data = JSON.parse(text);
    
	var k=0;
	 var arr=[];
	

	for (var i = 0; i < data.length; i++)
	{
		var obj = data[i];
		if(obj.Type=="VPMInstance" && obj.Status=="Update OK")
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

