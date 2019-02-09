function mayor(){
	sum=0;
	n = parseInt(document.getElementById("numero").value);
	if(n > 1000){
		sum = sum + (n * .05);
		if(n > 3000) {
			sum = sum + (n * .1);
			if( n 5000>){
				sum =sum + ( n * .05);
			}
		}
	}
	n = n+sum;
	document.getElementById("rs").innerHTML = n;
}