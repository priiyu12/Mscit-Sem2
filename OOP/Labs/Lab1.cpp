#include<iostream>
using namespace std;

/* 1. Given an array of integers of size N , compute the following:
• The sum of all elements
• The maximum element
• The count of even numbers*/
void ques1(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    
    int sum = 0, max = arr[0], even = 0;

    cout << "[ ";
    for(int i : arr){
        cout << i << " ";
        sum += i;
        if(max < i)
            max = i;
        if(i % 2 == 0)
            even++;
    }
    cout << "]" << endl;

    cout << "The sum of all elements : " << sum << endl;
    cout << "The maximum element : " << max << endl;
    cout << "Number of even elements : " << even << endl;

}

/*2. Write a program to reverse a stack without using the reverse() function.
Example:
Input: stack = [3, 7, 2]
Output: stack = [2, 7, 3]*/
void ques2(){
    int n;
    cout<<"Enter size of stack: ";
    cin>>n;

    int stack[n], reverse[n];
    int top = 0;
    while(top < n){
        cout << "Push an element to stack : ";
        cin >> stack[top++];
    }

    cout << "[ ";
    for(int i : stack){
        cout << i << " ";
    }
    cout << "]" << endl;

    cout << "Reverse the stack" << endl;
    int  i = 0;
    while(top >= 0){
        reverse[i++] = stack[--top];
    }
    cout << "[ ";
    for(int i : reverse){
        cout << i << " ";
    }
    cout << "]" << endl;
}

void ques3(){

}

/*Check whether a given array is a mountain array, i.e., it is strictly increasing up
to a peak and strictly decreasing after the peak. Print the peak element if it exists.
Example:
Input: [2, 5, 9, 12, 8, 4, 1]
Output: Valid Mountain, Peak = 12*/
void ques4(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    bool mountain = true;
    int i = 1, peak = 0;
    while(true && i < n){
        if(arr[i-1] < arr[i])
            i++;
        else
            break;
    }
    peak = arr[i-1];

    while(true && i < n){
        if(arr[i-1] > arr[i])
            i++;
        else{
            mountain = false;
            break;
        }
    }
    if(mountain == false)
        cout << "Invalid Mountain";
    else{
        cout << "Valid Mountain";
        cout << "Peak : " << peak;
    }
}

int main(){
    //ques1();
    //ques2();
    // ques3();
    ques4();
}