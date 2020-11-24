#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Eldritch {

	class EL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
			return s_CoreLogger;
		}

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
			return s_ClientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	} ;
}


// Sends the args from EL_CORE_[SEVERITY] to the ->severity() via the __VA_ARGS__ definition
// Core Log Macros
#define EL_CORE_TRACE(...) ::Eldritch::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define EL_CORE_INFO(...)  ::Eldritch::Log::GetCoreLogger()->info(__VA_ARGS__)
#define EL_CORE_WARN(...)  ::Eldritch::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define EL_CORE_ERROR(...) ::Eldritch::Log::GetCoreLogger()->error(__VA_ARGS__)
#define EL_CORE_FATAL(...) ::Eldritch::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client Log Macros
#define EL_TRACE(...) ::Eldritch::Log::GetClientLogger()->trace(__VA_ARGS__)
#define EL_INFO(...)  ::Eldritch::Log::GetClientLogger()->info(__VA_ARGS__)
#define EL_WARN(...)  ::Eldritch::Log::GetClientLogger()->warn(__VA_ARGS__)
#define EL_ERROR(...) ::Eldritch::Log::GetClientLogger()->error(__VA_ARGS__)
#define EL_FATAL(...) ::Eldritch::Log::GetClientLogger()->fatal(__VA_ARGS__)