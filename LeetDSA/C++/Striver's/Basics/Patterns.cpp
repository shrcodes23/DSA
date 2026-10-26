#include <bits/stdc++.h>
using namespace std;
void print1(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl; // move this inside the outer loop
    }
}
void print2(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print3(int n){
    for (int i=1;i<n;i++){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    for (int i=0;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print6(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    for (int i=0;i<n;i++){
        //space
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for (int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        } 
        cout<<endl; 
    }
}
void print8(int n){
    for (int i=0;i<n;i++){
        //space
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for (int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        //space
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl; 
    }
}
void print10(int n){
    for (int i=1;i<=2*n-1;i++){
        //space
        int stars=i;
        if(i>n) stars=2*n-i;
        for (int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl; 
    }
}
void print11(int n){
    int start=1;
    for (int i=0;i<n;i++){
        if (i%2==0) start=1;
        else start =0;
        for (int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    } 
}
void print12(int n){
    int space=2*(n-1);
    for (int i=1;i<=n;i++){
        //numbers
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for (int j=1;j<=space;j++){
            cout<<" ";
        }
        //numbers
        for (int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}
void print13(int n){
    int num=1;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}
void print14(int n){
    for (int i=0;i<n;i++){
        //i=2
        for (char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print15(int n){
    for (int i=0;i<n;i++){
        //i=2
        for (char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
          cout<<endl;
          
      }
}
void pattern17(int n){
    
      // Outer loop for the number of rows.
      for(int i=0;i<n;i++){
          
          // for printing the spaces.
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          
          // for printing the characters.
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
          
          // for printing the spaces again after characters.
          for(int j=0;j<n-i-1;j++){
              cout<<" ";
          }
          cout<<endl;
          
      }
}
void pattern18(int n){
      // Outer loop for the no. of rows.
      for(int i=0;i<n;i++){
          
          // Inner loop for printing the alphabets from
          // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
          for(char ch =('A'+n-1)-i;ch<=('A'+n-1);ch++){
              
              cout<<ch<<" ";
          }
          
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
      }
}
void pattern19(int n){
      // for the upper half of the pattern.
      
      // initial spaces.
      int iniS = 0;
      for(int i=0;i< n;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=n-i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=n-i;j++){
              cout<<"*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
      // for lower half of the pattern
      
      // initial spaces.
      iniS = 2*n -2;
      for(int i=1;i<=n;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
}
void pattern20(int n){
      // initialising the spaces.
      int spaces = 2*n-2;
      
      // Outer loop for printing row.
      for(int i = 1;i<=2*n-1;i++){
          
          // stars for first half
          int stars = i;
          
          // stars for the second half.
          if(i>n) stars = 2*n - i;
          
          //for printing the stars
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
          //for printing the spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          //for printing the stars
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
      
}
void pattern21(int n){
     // outer loop for no. of rows.
     for(int i=0;i<n;i++){
         
         // inner loop for printing the stars at borders only.
         for(int j=0;j<n;j++){
             
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
                
             // if not border index, print space.
             else cout<<" ";
         }
         
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
     }
      
}
void pattern22(int n){
     // Outer loop for no. of rows
     for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         
         // As soon as the numbers for each iteration are printed, we move to the
         // next row and give a line break otherwise all numbers
         // would get printed in 1 line.
         cout<<endl;
     }
      
}
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        pattern22(n);

    }
}
