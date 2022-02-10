#include <stdio.h>
#include <stdlib.h>
double func1(){
    int a,b,c,d,e;
    printf("Enter 5 integers:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    return (a+b+c+d+e)/(float)5;

}

int func2(){
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    if (a%2 == 0){
        printf("even");
        return 0;
    }
    else{
        printf("odd");
        return 0;
    }


}

int func3(){
    int sum=0,i=1;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("Summa ot 1 do 10: %d",sum);
    return 0;
}

int func4(){
    float res=1,x;
    int i=1,y;
    scanf("%f %d",&x,&y);
    if (y == 0){
        res = 1;
    }
    else{
        while(i<=y){
            res*=x;
            i++;
        }
        };
    printf("%f v %d = %f",x,y,res);
    return 0;
}

int func5(){
    int num;
    scanf("%d",&num);
    if(num%10 == num/10000 & num%100/10 == num/1000%10){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}

int func6(){
    int count=0,q,r=0,num;
    scanf("%d",&num);
    q = num;
    while(q!=0){
        r = q%10;
        q = q/10;
        if (r == 7){
            count++;
        };
    };
    printf("%d",count);
    return 0;
}

int func7(){
    double r,p = 3.14159,d,s,l;
    scanf("%lf",&r);
    d = r*2;
    l = d*p;
    s = p*r*r;
    printf("d = %lf, l = %lf, s = %lf",d,l,s);
    return 0;
}

int func8(){
    int i,num,res=1;
    scanf("%d",&num);
    i = num;


    while(i>1){
        res*=i;
        i--;
    };
    printf("%d",res);
    return 0;
}
int fact(int n){
    int i, res=1;
    i = n;
    while(i>1){
        res*=i--;
    }
    return res;
}
int func9(){
    double x,x1=1,sum = 1;
    int i=1;
    scanf("%lf",&x);
    while(i<=10){
        x1*=x;
        sum += x1/fact(i++);
    }
    printf("%lf",sum);
    return 0;
}

int main()
{
    func9();
    return 0;
}
