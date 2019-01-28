class Outer
{
public:
	class Inner
	{
	public:
		Inner(Outer& outer) : m_outer(outer) {}
	public:
		void f()
		{
			m_outer.m_i = 5;
		}
	private:
		Outer& m_outer;
	};

	void g()
	{
		inner.f();
	}
public:
	Outer() : inner(*this) {}
private:
	Inner inner;
	int m_i;
};

int main()
{
	Outer outer;
	outer.g();
}