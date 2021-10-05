template<typename T>
Hector<T>::Hector()
	:m_capacity {2}
	,m_size{0}
	{T* m_arr=new T[m_capacity];}

template <typename T>
Hector<T>::Hector(int capacity)
{
	m_capacity=capacity;
	m_size=0;
	m_arr=new T[m_capacity];
}

template<typename T>
Hector<T>::Hector(const Hector& object)
{
	m_capacity=object.m_capacity;
	m_size=object.m_size;
	m_arr=new T[object.m_capacity];
	for(int i=0; i<object.m_size;++i)
	{
		m_arr[i]=object.m_arr[i];
	}

}

template<typename T>
Hector<T>::~Hector()
{
	delete [] m_arr;
}

template<typename T>
void Hector<T>::push_back(const T& element)
{
	if(m_size < m_capacity)
	{
		m_arr[m_size]=element;
		++m_size;
	}
	T* tmp = new T[m_capacity*2] {0};
	for(int i=0; i<m_size; ++i)
	{
		tmp[i]=m_arr[i];
	}
	++m_size;
	delete[] m_arr;
	m_arr=tmp;
}


template<typename T>
void Hector::pop_back()
{
	if(m_size>0){--m_size;}
}

template<typename T>
void Hector::erase(int n)
{
	try
	{
		if(m_size>=n && n>=0)
		{
			while(m_size>n && n>=0)
			{
				m_arr[n]=m_arr[n+1];
				++n;
			}
			--m_size;
		}
		
	}
	throw(n);
	
}

template<typename T>
const T& Hector::at(int index)
{
	try
	{
		if(m_size>=index>=0)
		{return m_arr[index];}
		throw(index);
	}
}


template<typename T>
Hector& Hector::operator=(const Hector& other)
{
	if(this==&other) {return *this;}
	m_capacity=other.m_capacity;
	m_size=other.m_size;
	T* tmp = new T[m_capacity];
	for(int i=0;i<m_size;++i)
	{
		tmp[i]=other.m_arr[i];
	}
	delete [] m_arr;
	m_arr=tmp;
	return *this;
}

template<typename T>
*T Hector::operator[](int n)
{
	return *(m_arr+ (sizeof(T)*n));
}


template<typename T>
int Hector::get_size()
{
	return m_size;
}

template<typename T>
int Hector::get_capacity()
{
	return m_capacity;
}

template<typename T>
void Hector::print_out()
{
	for(int i=0; i<m_size; ++i)
	{
		std::cout<<m_arr[i]<<std::endl;
	}
}

template<typename T>
void Hector::check_size&capacity()
{
	if(m_size<=(m_capacity*2)/3)
	{
		T* tmp =new T [(m_capacity*2)/3)];
		for (int i=0; i<(m_capacity*2)/3);++i )
		{
			tmp[i]=m_arr[i];
		}
		delete m_arr;
		m_arr=tmp;
	}
}