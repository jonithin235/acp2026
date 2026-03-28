int* create_array(int n); 
void initialize_array(int *arr, int n); 
void print_array(int *arr, int n); 
void delete_array(int **arr);

int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *arr=create_array(n);
    initialize_array(arr,n);
    print_array(arr,n);
    delete_array(&arr);
    return 0;
  

}
int* create_array(int n)
{
    int *arr;
    arr = (int*) malloc(n * sizeof(int));
    return arr;
}

void initialize_array(int *arr, int n){
    
} 