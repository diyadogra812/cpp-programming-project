75🔹 LeetCode #26 — Remove Duplicates from Sorted Array
// Problem:
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int> temp;

//         for(int i = 0; i < nums.size(); i++) {
//             bool found = false;

//             for(int j = 0; j < temp.size(); j++) {
//                 if(nums[i] == temp[j]) {
//                     found = true;
//                     break;
//                 }
//             }

//             if(!found)
//                 temp.push_back(nums[i]);
//         }

//         nums = temp;
//         return nums.size();
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {1,1,2};

//     cout << obj.removeDuplicates(nums);

// }



// 76🔹 LeetCode #27 — Remove Element
// Problem:
// Given an integer array nums and an integer val, remove all occurrences of val in-place.
// Return the number of elements k that are not equal to val.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         vector<int> temp;

//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] != val)
//                 temp.push_back(nums[i]);
//         }

//         nums = temp;
//         return nums.size();
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {3,2,2,3};

//     cout << obj.removeElement(nums, 3);
// }

// 77🔹 LeetCode #121 — Best Time to Buy and Sell Stock
// Problem:
// You are given an array prices where prices[i] is the price of a stock on day i.
// You want to maximize your profit by:
// Choosing a day to buy
// Choosing a later day to sell
// Return the maximum profit you can achieve.
// If no profit is possible, return 0.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxProfit = 0;

//         for(int i = 0; i < prices.size(); i++) {
//             for(int j = i+1; j < prices.size(); j++) {
//                 if(prices[j] - prices[i] > maxProfit)
//                     maxProfit = prices[j] - prices[i];
//             }
//         }
//         return maxProfit;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> prices = {7,1,5,3,6,4};
//     cout << obj.maxProfit(prices);
// }

// 78.🔹HackerRank — Simple Array Sum

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int simpleArraySum(vector<int>& arr) {
//         int sum = 0;

//         for(int i = 0; i < arr.size(); i++)
//             sum += arr[i];

//         return sum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1,2,3,4};

//     cout << obj.simpleArraySum(arr);
// }


// 79🔹 LeetCode #136 — Single Number
// Problem:
// Given a non-empty array of integers nums, every element appears twice except for one.
// Find that single one.
// Find the element that appears once (others appear twice).
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++) {
//             int count = 0;

//             for(int j = 0; j < nums.size(); j++) {
//                 if(nums[i] == nums[j])
//                     count++;
//             }

//             if(count == 1)
//                 return nums[i];
//         }
//         return -1;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {2,2,1};
//     cout << obj.singleNumber(nums);
// }

// 80.🔹 LeetCode #53 — Maximum Subarray
// Problem:
// Given an integer array nums, find the contiguous subarray with the largest sum, and return its sum.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int maxSum = nums[0];

//         for(int i = 0; i < nums.size(); i++) {
//             int sum = 0;
//             for(int j = i; j < nums.size(); j++) {
//                 sum += nums[j];
//                 if(sum > maxSum)
//                     maxSum = sum;
//             }
//         }
//         return maxSum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//     cout << obj.maxSubArray(nums);
// }

// 81.🔹hacker rank -- MINI-MAX SUM
// Find min sum of 4 elements and max sum of 4 elements.

// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void miniMaxSum(vector<int>& arr) {
//         long total = 0;

//         for(int i = 0; i < arr.size(); i++)
//             total += arr[i];

//         long minSum = total - arr[0];
//         long maxSum = total - arr[0];

//         for(int i = 0; i < arr.size(); i++) {
//             long sum = total - arr[i];

//             if(sum < minSum) minSum = sum;
//             if(sum > maxSum) maxSum = sum;
//         }

//         cout << minSum << " " << maxSum;
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> arr = {1,2,3,4,5};
//     obj.miniMaxSum(arr);
// }



// 82🔹 LeetCode #88 — Merge Sorted Array
// Problem:
// You are given two sorted integer arrays nums1 and nums2, and two integers m and n.
// nums1 has size m + n
// First m elements are valid
// Last n elements are 0 (placeholders)
// Merge nums2 into nums1 as one sorted array.


// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i = 0; i < n; i++) {
//             nums1[m+i] = nums2[i];
//         }

//         // simple sort
//         for(int i = 0; i < m+n; i++) {
//             for(int j = i+1; j < m+n; j++) {
//                 if(nums1[i] > nums1[j]) {
//                     int temp = nums1[i];
//                     nums1[i] = nums1[j];
//                     nums1[j] = temp;
//                 }
//             }
//         }
//     }
// };

// int main() {
//     Solution obj;
//     vector<int> nums1 = {1,2,3,0,0,0};
//     vector<int> nums2 = {2,5,6};

//     obj.merge(nums1, 3, nums2, 3);

//     for(int i = 0; i < nums1.size(); i++)
//         cout << nums1[i] << " ";
// }



// 🔹 83. Reverse Linked List//Leet Code #206
// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* reverseList(node* head) {
//         node* prev = NULL;
//         node* curr = head;

//         while (curr) {
//             node* next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//         }
//         return prev;
//     }
// };

// void printList(node* head) {
//     while (head) {
//         cout << head->val << " -> ";
//         head = head->next;
//     }
//     cout << "NULL\n";
// }

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);

//     Solution obj;
//     head = obj.reverseList(head);

//     printList(head);
//     return 0;
// }

// 🔹 84. Middle of Linked List // leet code #876

// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solution {
// public:
//     node* middlenode(node* head) {
//         node* slow = head;
//         node* fast = head;

//         while (fast && fast->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

// int main() {
//     node* head = new node(1);
//     head->next = new node(2);
//     head->next->next = new node(3);
//     head->next->next->next = new node(4);

//     Solution obj;
//     node* mid = obj.middlenode(head);

//     cout << "Middle: " << mid->val;
//     return 0;
// }


// 🔹 85. Remove Duplicates from Sorted List leet code #83


// #include <iostream>
// using namespace std;

// class node {
// public:
//     int val;
//     node* next;

//     node(int x) {
//         val = x;
//         next = NULL;
//     }
// };

// class Solu