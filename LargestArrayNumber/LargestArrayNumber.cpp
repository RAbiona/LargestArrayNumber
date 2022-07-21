// LargestArrayNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int findLargestArrayNumber(int theArray[], int size);

int main()
{
    //Very barebones in that could have copied video to have user input numbers to fill array
    //Wanted to focus on function to iterate through array to find largest number to continue to next assignment
    //Can revise this if needed.
    
    int nums[5] = { 45, 6, 77, 17, 150 };

    std::cout << "Largest Number in array: " << findLargestArrayNumber(nums, 5);
}


int findLargestArrayNumber(int theArray[], int size) {
    int largest = theArray[0];

    for (int i = 0; i < size; i++) {
        if (theArray[i] > largest) {
            largest = theArray[i];
        }
    }
    return largest;
}
