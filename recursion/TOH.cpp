#include <iostream> 
using namespace std; 

void towerOfHanoi(int n, char from_rod, char to_rod, 
				char aux_rod) 
{ 
	if (n == 0) { 
		return; 
	}                   // A        B        C
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
                                            //A                     C
	cout <<"Move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl; 
                        // B        C      A
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
} 

// Driver code 
int main() 
{ 
	int N = 3; 

	// A, B and C are names of rods 
	towerOfHanoi(N, 'A', 'C', 'B'); 
	return 0; 
} 