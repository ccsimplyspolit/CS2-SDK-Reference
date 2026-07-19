#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
    };
};

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
        // Size: 0x4c8
        // Has VTable
        #pragma pack(push, 1)
        class CPointPush : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bEnabled; // 0x4a0            
            uint8_t _pad04a1[0x3]; // 0x4a1
            float m_flMagnitude; // 0x4a4            
            float m_flRadius; // 0x4a8            
            float m_flInnerRadius; // 0x4ac            
            float m_flConeOfInfluence; // 0x4b0            
            uint8_t _pad04b4[0x4]; // 0x4b4
            CUtlSymbolLarge m_iszFilterName; // 0x4b8            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x4]; // 0x4c0            
            uint8_t _pad04c4[0x4];
            
            // Datamap fields:
            // void CPointPushPushThink; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointPush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPointPush) == 0x4c8);
    };
};
