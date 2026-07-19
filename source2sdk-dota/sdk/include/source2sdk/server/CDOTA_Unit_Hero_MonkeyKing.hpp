#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"

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
        // Size: 0x1f28
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Hero_MonkeyKing : public source2sdk::server::CDOTA_BaseNPC_Hero
        {
        public:
            std::uint32_t m_nTreeDisguise; // 0x1f00            
            std::uint32_t m_nPerchedTree; // 0x1f04            
            VectorWS m_vLastPos; // 0x1f08            
            bool m_bIsOnCloud; // 0x1f14            
            uint8_t _pad1f15[0x3]; // 0x1f15
            float m_fTotalDistOnCloud; // 0x1f18            
            float m_fTotalDistoffCloud; // 0x1f1c            
            float m_fBackOnCloudThresh; // 0x1f20            
            uint8_t _pad1f24[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Hero_MonkeyKing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Hero_MonkeyKing) == 0x1f28);
    };
};
