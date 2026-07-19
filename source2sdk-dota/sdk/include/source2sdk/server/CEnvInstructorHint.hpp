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
        // Size: 0x508
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvInstructorHint : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x498            
            CUtlSymbolLarge m_iszReplace_Key; // 0x4a0            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x4a8            
            std::int32_t m_iTimeout; // 0x4b0            
            std::int32_t m_iDisplayLimit; // 0x4b4            
            CUtlSymbolLarge m_iszIcon_Onscreen; // 0x4b8            
            CUtlSymbolLarge m_iszIcon_Offscreen; // 0x4c0            
            CUtlSymbolLarge m_iszCaption; // 0x4c8            
            CUtlSymbolLarge m_iszActivatorCaption; // 0x4d0            
            Color m_Color; // 0x4d8            
            float m_fIconOffset; // 0x4dc            
            float m_fRange; // 0x4e0            
            std::uint8_t m_iPulseOption; // 0x4e4            
            std::uint8_t m_iAlphaOption; // 0x4e5            
            std::uint8_t m_iShakeOption; // 0x4e6            
            bool m_bStatic; // 0x4e7            
            bool m_bNoOffscreen; // 0x4e8            
            bool m_bForceCaption; // 0x4e9            
            uint8_t _pad04ea[0x2]; // 0x4ea
            std::int32_t m_iInstanceType; // 0x4ec            
            bool m_bSuppressRest; // 0x4f0            
            uint8_t _pad04f1[0x7]; // 0x4f1
            CUtlSymbolLarge m_iszBinding; // 0x4f8            
            bool m_bAllowNoDrawTarget; // 0x500            
            bool m_bAutoStart; // 0x501            
            bool m_bLocalPlayerOnly; // 0x502            
            uint8_t _pad0503[0x5];
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x0
            // void InputEndHint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvInstructorHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvInstructorHint) == 0x508);
    };
};
