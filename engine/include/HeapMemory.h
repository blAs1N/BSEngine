#pragma once

#include "Core.h"

namespace BE
{
	class BS_API HeapMemory final
	{
	public:
		constexpr HeapMemory() noexcept;

		void Init(void* const inMemory, const size_t inSize) noexcept;

		void Release() noexcept;

		void* Allocate(const size_t size);

		void Deallocate(void* const ptr, const size_t size);

	private:
		Uint8* memory;
		Uint8* marker;

		size_t curNum;
		size_t maxNum;
	};
}