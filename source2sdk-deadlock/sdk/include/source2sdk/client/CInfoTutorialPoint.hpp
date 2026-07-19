#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/client/HeroID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x608
        // Has VTable
        #pragma pack(push, 1)
        class CInfoTutorialPoint : public source2sdk::client::C_PointEntity
        {
        public:
            std::int32_t m_ePointType; // 0x5f0            
            uint8_t _pad05f4[0x4]; // 0x5f4
            CUtlSymbolLarge m_sMoveTarget; // 0x5f8            
            source2sdk::client::HeroID_t m_HeroID; // 0x600            
            uint8_t _pad0604[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoTutorialPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoTutorialPoint) == 0x608);
    };
};
