// Online Java Compiler

// Use this editor to write, compile and run your Java code online
 
class largest{

public static void main (String[] args){

int[] arr = {1,8,7,56,90};

int maxi = arr[0];

int second= arr[0];

int third= arr[0];

int four= arr[0];

for(int i=1; i<arr.length; i++){

if(arr[i]> maxi){

maxi = arr[i];

}

}

System.out.println("Max "+ maxi);

for(int i=1; i<arr.length; i++){

if(arr[i]!= maxi && arr[i]>second ){

second  =arr[i]  ;

}

}

     System.out.println("Second "+ second);
 
for(int i=1; i<arr.length; i++){

if(arr[i]!= second && arr[i]!=maxi   && arr[i]>third ){

third =arr[i]  ;

}

}

     System.out.println("third  "+ third);

     for(int i=1; i<arr.length; i++){

if(arr[i]!= second && arr[i]!=maxi   && arr[i]!=third && arr[i]>four ){

four =arr[i]  ;

}

}

     System.out.println("four   "+ four);

}
 
 
}
 
