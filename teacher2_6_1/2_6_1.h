class String
{
private:
	char *m_data;
public:
	String( const char *str = NULL);
	String(const  String &other);
	~String();
};