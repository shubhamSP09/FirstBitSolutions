void main(){
	int num = 11, sum = 0;
	int count = 0;
	
	int temp = num;
	while(temp != 0){
		count++;
		temp /= 10;
	}
	temp = num;
	
	while(temp != 0){
		int rem = temp % 10;
		int power = 1, i;
		for(i = 0; i < count; i++){
			power = power * rem;
		}
		
		sum += power;
		
		temp /= 10;
	}
	
	if(num == sum){
		printf("armstrong");
	}else{
		printf("not");
	}
}
