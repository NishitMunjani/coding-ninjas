string read(int n, vector<int> book, int target)
{
    int left=0, right=n-1;
    sort(book.begin(), book.end());
    while(left < right){
        if(book[left] + book[right] > target) right--;
        if(book[left] + book[right] < target) left++;
        if(book[left] + book[right] == target) return "YES";
    }
    return "NO";
}
