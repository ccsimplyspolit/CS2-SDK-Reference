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
        // Size: 0x518
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CEnvInstructorHint : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x4a8            
            CUtlSymbolLarge m_iszReplace_Key; // 0x4b0            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x4b8            
            std::int32_t m_iTimeout; // 0x4c0            
            std::int32_t m_iDisplayLimit; // 0x4c4            
            CUtlSymbolLarge m_iszIcon_Onscreen; // 0x4c8            
            CUtlSymbolLarge m_iszIcon_Offscreen; // 0x4d0            
            CUtlSymbolLarge m_iszCaption; // 0x4d8            
            CUtlSymbolLarge m_iszActivatorCaption; // 0x4e0            
            Color m_Color; // 0x4e8            
            float m_fIconOffset; // 0x4ec            
            float m_fRange; // 0x4f0            
            std::uint8_t m_iPulseOption; // 0x4f4            
            std::uint8_t m_iAlphaOption; // 0x4f5            
            std::uint8_t m_iShakeOption; // 0x4f6            
            bool m_bStatic; // 0x4f7            
            bool m_bNoOffscreen; // 0x4f8            
            bool m_bForceCaption; // 0x4f9            
            uint8_t _pad04fa[0x2]; // 0x4fa
            std::int32_t m_iInstanceType; // 0x4fc            
            bool m_bSuppressRest; // 0x500            
            uint8_t _pad0501[0x7]; // 0x501
            CUtlSymbolLarge m_iszBinding; // 0x508            
            bool m_bAllowNoDrawTarget; // 0x510            
            bool m_bAutoStart; // 0x511            
            bool m_bLocalPlayerOnly; // 0x512            
            uint8_t _pad0513[0x5];
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x0
            // void InputEndHint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvInstructorHint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvInstructorHint) == 0x518);
    };
};
