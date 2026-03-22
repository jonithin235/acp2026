#include <stdio.h>
#include <string.h>
typedef struct {
    char destination[100];
    int flight_number;
    int available_seats;
} Flight_t;
void readFlights(int n, Flight_t f[]); 
void searchByDestination(int n, Flight_t f[], char searchDest[]);

int main(){
    int n=4;
    Flight_t f[n];
    readFlights(n,f);
    char searchDest[100];
    printf("Enter the destination to search for:\n");
    scanf("%s",searchDest);
    searchByDestination(n,f,searchDest);
    return 0;
}
void readFlights(int n, Flight_t f[]){
    for(int i=0;i<n;i++){
        printf("Enter the flight details,destination,flight number and availability of seats:\n");
        scanf("%s %d %d",f[i].destination,&f[i].flight_number,&f[i].available_seats);
        
    }
}
void searchByDestination(int n, Flight_t f[], char searchDest[]){
    int found=0;
    for(int i=0;i<n;i++){
        if(strcmp(f[i].destination,searchDest)==0){
            printf("Flight number: %d,Available seats: %d\n",f[i].flight_number,f[i].available_seats);
            found=1;
        
        }
      
    }
    if(found==0){
        printf("No flightd for the destionation found.\n");
    }
    
}