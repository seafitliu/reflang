// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!! This file is auto-generated by Reflang. !!!
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <algorithm>
#include <cassert>
#include <stdexcept>
#include <string>
#include <type_traits>

#include "lib/reflang.hpp"

namespace reflang
{

template <>
class Class<DummyClass> : public IClass
{
public:
	// Calls T::operator() on each member of 'DummyClass'.
	// Works well with C++14 generic lambdas.
	template <typename T>
	static void IterateMembers(const DummyClass& c, T t)
	{
	}

	template <typename T>
	static void IterateMembers(DummyClass& c, T t)
	{
	}

	static const constexpr int MemberCount = 0;

	int GetMemberCount() const override
	{
		return MemberCount;
	}
};

const int Class<DummyClass>::MemberCount;


template <>
class Function<decltype(ns::NamespacedFunction), ns::NamespacedFunction> : public IFunction
{
	int GetParameterCount() const override
	{
		return 0;
	}

	const std::string& GetName() const override
	{
		static const std::string name = "ns::NamespacedFunction";
		return name;
	}

	Object Invoke(const std::vector<Object>& args) override
	{
		if (args.size() != 0)
		{
			throw std::invalid_argument("count");
		}

		return Object(ns::NamespacedFunction());
	}
};

namespace
{
	// Object to auto-register ns::NamespacedFunction.
	struct ns__NamespacedFunction_registrar
	{
		ns__NamespacedFunction_registrar()
		{
			::reflang::registry::internal::Register(
				std::make_unique<
					Function<
						decltype(ns::NamespacedFunction),
						ns::NamespacedFunction>>());
		}
	} ns__NamespacedFunction_instance;
}


template <>
class Function<decltype(GlobalFunction), GlobalFunction> : public IFunction
{
	int GetParameterCount() const override
	{
		return 0;
	}

	const std::string& GetName() const override
	{
		static const std::string name = "GlobalFunction";
		return name;
	}

	Object Invoke(const std::vector<Object>& args) override
	{
		if (args.size() != 0)
		{
			throw std::invalid_argument("count");
		}

		return Object(GlobalFunction());
	}
};

namespace
{
	// Object to auto-register GlobalFunction.
	struct GlobalFunction_registrar
	{
		GlobalFunction_registrar()
		{
			::reflang::registry::internal::Register(
				std::make_unique<
					Function<
						decltype(GlobalFunction),
						GlobalFunction>>());
		}
	} GlobalFunction_instance;
}


template <>
class Function<decltype(ReturnByValue), ReturnByValue> : public IFunction
{
	int GetParameterCount() const override
	{
		return 0;
	}

	const std::string& GetName() const override
	{
		static const std::string name = "ReturnByValue";
		return name;
	}

	Object Invoke(const std::vector<Object>& args) override
	{
		if (args.size() != 0)
		{
			throw std::invalid_argument("count");
		}

		return Object(ReturnByValue());
	}
};

namespace
{
	// Object to auto-register ReturnByValue.
	struct ReturnByValue_registrar
	{
		ReturnByValue_registrar()
		{
			::reflang::registry::internal::Register(
				std::make_unique<
					Function<
						decltype(ReturnByValue),
						ReturnByValue>>());
		}
	} ReturnByValue_instance;
}


template <>
class Function<decltype(ReturnByReference), ReturnByReference> : public IFunction
{
	int GetParameterCount() const override
	{
		return 0;
	}

	const std::string& GetName() const override
	{
		static const std::string name = "ReturnByReference";
		return name;
	}

	Object Invoke(const std::vector<Object>& args) override
	{
		if (args.size() != 0)
		{
			throw std::invalid_argument("count");
		}

		return Object(ReturnByReference());
	}
};

namespace
{
	// Object to auto-register ReturnByReference.
	struct ReturnByReference_registrar
	{
		ReturnByReference_registrar()
		{
			::reflang::registry::internal::Register(
				std::make_unique<
					Function<
						decltype(ReturnByReference),
						ReturnByReference>>());
		}
	} ReturnByReference_instance;
}


}  // namespace reflang
