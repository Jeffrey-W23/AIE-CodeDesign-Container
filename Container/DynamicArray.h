#pragma once

template<typename T>
class DynamicArray
{
public:

	// constructor
	DynamicArray()
	{
	}

	// copy constructor 
	DynamicArray(const DynamicArray& other)
	{
	
	}
	
	// distructor  
	~DynamicArray();
	{
	
	}

	// assignment operator
	DynamicArray& operator= (const DynamicArray& other)
	{
	
	}

	// Create the array
	void CreateArray(int m_nSize)
	{
		m_date = new T[m_size];
		m_capacity = m_nSize;
		m_used = 0;
	}

	T* m_data;
	int m_nCapacity;
	int m_nUsed;
};

