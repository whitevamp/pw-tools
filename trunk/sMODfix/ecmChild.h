#pragma once

public ref class ecmCHILD
{
	public: ecmCHILD()
	{
	}
	protected: ~ecmCHILD()
	{
	}

	public: ArrayList^ Parameters;

	public: void SetAllParameters(array<String^>^ Properties)
	{
		Parameters = gcnew ArrayList(Properties);
	}

	public: void Fix(Options^ options)
	{
		// nothing to be done
	}

	public: array<String^>^ GetAllParameters()
	{
		array<String^>^ temp = gcnew array<String^>(Parameters->Count);

		for(int i=0; i<temp->Length; i++)
		{
			temp[i] = (String^)Parameters[i];
		}

		return temp;
	}
};