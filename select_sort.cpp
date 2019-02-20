

int k = 0;
int temp = 0;
for(unsigned int i = 0; i < array_min.size()-1; ++i){
	k = i+1;
	while(k < int(array_min.size())){
		if(array_min[k] < array_min[i]){
			temp = array_min[k];
			array_min[k] = array_min[i];
			array_min[i] = temp;
		}
		++k;
	}
}




/*
k = i;
temp = array_min[i];

for(unsigned int j = i + 1; j < array_min.size(); ++j){
	if(array_min[j] < temp){
		k = j;
		temp = array_min[j];
	}
}

array_min[k] = array_min[i];
array_min[i] = temp;
*/
