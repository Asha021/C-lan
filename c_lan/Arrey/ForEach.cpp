#include<iostream>
#include<string>
using namespace std;
int main(){
	int *ptr = new int[10];
	int arr[]={2,3,45,3};
	for(int i :   arr){
		cout<<i<<endl;
	}
}


// int main(){
// 	int *ptr = new int[10]{12,4,6,7,8,545,3};
// 	int arr[]={2,3,45,3};
// // 	foreach loop
// // 	for(int i :  arr){
// // 		cout<<i<<endl;
// // 	}
//     for(int i=0; i<9; i++){
//         	cout<<ptr[i]<<endl;
//     }
// }

// int main(){
//     int arr[]={2,3,45,76,4};
//     int a = arr[0];
//     for(int i=0; i<5; i++){
//         if(a<arr[i])
//         a=arr[i];
//     }
//     cout<<a;
// }

int main(){
    int *ptr = new int[10]{2,4,325,63,63,74,53};
    for(int i=0; i<10; i++){
        for(int j = i+1; j<10; j++){
             if(ptr[i]<ptr[j]){
            int tmp = ptr[i];
            ptr[i] = ptr[j];
            ptr[j] = tmp;
             }
        }
    }
    // for(int k=0; k<10; k++)
    // {
    // cout<<ptr[k]<<endl;
    // }
    for(int i=0; i<3; i++){
         cout<<ptr[i]<<endl;
    }
    //  cout<<ptr[0]<<endl<<ptr[1]<<endl<<ptr[2]<<endl;
}
