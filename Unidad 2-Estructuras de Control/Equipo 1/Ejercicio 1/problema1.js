function par(){
	n=document.getElementById("numero").value;
	if(n % 2 == 0){
		document.getElementById("rs").innerHTML="el numero "+n+" es par";
	}
	else{
		document.getElementById("rs").innerHTML="el numero "+n+" es impar";
	}
}