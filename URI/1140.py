while True:
	datain=input()
	if datain=='*':
		break;
	datain=datain.split(" ")
	var=0
	for i in range(len(datain)-1):
		if(datain[i][:1].lower() == datain[i+1][:1].lower()):
			var=1;
		else : 
			var=0;

	if var==1:
		print("Y")
	else:
		print("N")