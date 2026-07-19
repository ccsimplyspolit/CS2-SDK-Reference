#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvInstructorVRHint : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x4a8            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x4b0            
            std::int32_t m_iTimeout; // 0x4b8            
            uint8_t _pad04bc[0x4]; // 0x4bc
            CUtlSymbolLarge m_iszCaption; // 0x4c0            
            CUtlSymbolLarge m_iszStartSound; // 0x4c8            
            std::int32_t m_iLayoutFileType; // 0x4d0            
            uint8_t _pad04d4[0x4]; // 0x4d4
            CUtlSymbolLarge m_iszCustomLayoutFile; // 0x4d8            
            std::int32_t m_iAttachType; // 0x4e0            
            float m_flHeightOffset; // 0x4e4            
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x0
            // void InputEndHint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvInstructorVRHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvInstructorVRHint) == 0x4e8);
    };
};
