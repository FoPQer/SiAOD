#include<iostream>
using namespace std;
struct findTree
{
	int key;
	findTree* left = nullptr, * right = nullptr;
	void add(int fkey);
	findTree(int key, findTree* left, findTree* right);
	void around();
};

int main()
{
	setlocale(LC_ALL, "Russian");
	findTree* usel;
	int* fkey = new int;
	cin >> *fkey;
	usel = new findTree(*fkey, nullptr, nullptr);
	while (true)
	{
		fkey = new int;
		cin >> *fkey;
		if (*fkey == -1)
			break;
		else
			(*usel).add(*fkey);
	}
	system("pause");
}

void findTree::add(int fkey)
{
	if (this->left == nullptr)
	{
		this->left = new findTree(fkey, nullptr, nullptr);
		return;
	}
	if (this->right == nullptr)
	{
		this->right = new findTree(fkey, nullptr, nullptr);
		return;
	}
	if (this->right != nullptr && this->left != nullptr)
	{
		left->add(fkey);
	}
}

findTree::findTree(int key, findTree* left, findTree* right)
{
	this->key = key;
	this->left = left;
	this->right = right;
}

void findTree::around()
{
	cout << this->key << ' ';

}