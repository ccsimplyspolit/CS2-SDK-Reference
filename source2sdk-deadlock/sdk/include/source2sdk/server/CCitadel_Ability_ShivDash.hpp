#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseShivAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPointModifierThinker;
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
        // Size: 0x1580
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vStartPosition"
        // static metadata: MNetworkVarNames "Vector m_vDashDirection"
        // static metadata: MNetworkVarNames "bool m_bIsDashing"
        #pragma pack(push, 1)
        class CCitadel_Ability_ShivDash : public source2sdk::server::CCitadelBaseShivAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vStartPosition; // 0xf70            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vDashDirection; // 0xf7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIsDashing; // 0xf88            
            uint8_t _pad0f89[0x7]; // 0xf89
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0xf90            
            Vector m_vecLastPosition; // 0xfa8            
            std::int32_t m_nReductionsLeft; // 0xfb4            
            uint8_t _pad0fb8[0x580]; // 0xfb8
            source2sdk::entity2::GameTime_t m_flStuckTime; // 0x1538            
            uint8_t _pad153c[0x14]; // 0x153c
            // m_hEchoThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPointModifierThinker> m_hEchoThinker;
            char m_hEchoThinker[0x4]; // 0x1550            
            source2sdk::entity2::GameTime_t m_EchoStartTime; // 0x1554            
            bool m_bLetEchoPlay; // 0x1558            
            uint8_t _pad1559[0x1f]; // 0x1559
            bool m_bDiscontinuityInEcho; // 0x1578            
            uint8_t _pad1579[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ShivDash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ShivDash) == 0x1580);
    };
};
