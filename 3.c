#include <stdio.h>
#include <math.h>

int distance(){
    double x1,y1,x2,y2,dis;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    printf("%lf",sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
    return 0;
}

int gcd(){
    int x1,x2;
    scanf("%d %d",&x1,&x2);

    while(x1!=x2){
        if(x1>x2) x1-=x2;
        else x2 -= x1;
    }
    printf("\n%d",x1);
    return 0;

}

int func3(){
    int x1, count=0, r;
    scanf("%d",&x1);
    r=x1;
    while(x1!=0){
        x1 = x1 / 10;
        count++;
    };
    printf("%d\n",count);
    int m[count], i;
    for (i=0;i<=count;i++){
        m[i] = r%10;
        r = r/10;
    }
    for(i=0;i<count;i++) printf("%d ",m[i]);
    return 0;
}

int func4(){
    int entry,res;
    scanf("%d",&entry);

    int i;
    for (i = 1; i < entry; i++){
        if (entry % i == 0){
            res = i;
        }
    }
    if (res > 1){
        puts("non prime");
        return 1;
    }
    else{
        puts("prime");
        return 0;

    }
}

/*int func5(){
    double x1,x2,x3;
    scanf("%lf %lf %lf",&x1,&x2,&x3);
    printf("%lf",min(min(x1, x2),min(x2, x3)));
    return 0;

}*/
long int func6(long int n){
	long int res;
	if (n == 0 || n == 1) return 1;
	res = n*func6(n - 1);
	printf("\nfactorial(%ld) = %ld * factorial(%ld)",n,n,n-1);
	return res;
}
int func7(char* entry){
    int count = 0;
    while(entry[0]!='\0'){
        if (entry[0]==' '){
            count++;
        }
        entry++;
    }
    printf("%d", count);
    return 0;
}
int count_spaces(char* argv) {
	int count = 0;
	while (argv[0] != '\0') {
		if (argv[0] == ' ') count++;
		argv++;
	}
	printf("\n%d", count);
	return count;

	}
int main()
{
   func7("hel l  d d");

    return 0;
}
