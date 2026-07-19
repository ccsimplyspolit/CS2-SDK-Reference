#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Broodmother_StickySnare : public source2sdk::server::CDOTABaseAbility
        {
        public:
            VectorWS m_vEndpoint; // 0x580            
            float duration; // 0x58c            
            float width; // 0x590            
            bool m_bStolenSnareCheck; // 0x594            
            uint8_t _pad0595[0x1b]; // 0x595
            // m_vecSnares has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecSnares;
            char m_vecSnares[0x18]; // 0x5b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Broodmother_StickySnare because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Broodmother_StickySnare) == 0x5c8);
    };
};
