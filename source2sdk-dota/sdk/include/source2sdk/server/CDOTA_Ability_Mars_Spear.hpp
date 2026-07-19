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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Mars_Spear : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x580            
            uint8_t _pad0598[0x14]; // 0x598
            std::int32_t damage; // 0x5ac            
            // hImpaledTargetList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hImpaledTargetList;
            char hImpaledTargetList[0x18]; // 0x5b0            
            std::int32_t m_nTargetsImpaled; // 0x5c8            
            std::int32_t m_nMaxImpaleTargets; // 0x5cc            
            bool m_bHadBulwarkEnabled; // 0x5d0            
            uint8_t _pad05d1[0x3]; // 0x5d1
            VectorWS m_vLastTrailThinkerLocation; // 0x5d4            
            bool bHasStartedBurning; // 0x5e0            
            uint8_t _pad05e1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Mars_Spear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Mars_Spear) == 0x5e8);
    };
};
