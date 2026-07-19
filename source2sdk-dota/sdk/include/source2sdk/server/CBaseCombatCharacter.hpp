#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/Hull_t.hpp"
#include "source2sdk/server/CBaseAnimatingOverlay.hpp"
#include "source2sdk/server/CMovementStatsProperty.hpp"
#include "source2sdk/server/RelationshipOverride_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CEconWearable;
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
        // Size: 0x868
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CBaseCombatCharacter : public source2sdk::server::CBaseAnimatingOverlay
        {
        public:
            bool m_bForceServerRagdoll; // 0x798            
            uint8_t _pad0799[0x7]; // 0x799
            // metadata: MNotSaved
            // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CEconWearable>> m_hMyWearables;
            char m_hMyWearables[0x18]; // 0x7a0            
            float m_impactEnergyScale; // 0x7b8            
            bool m_bApplyStressDamage; // 0x7bc            
            bool m_bDeathEventsDispatched; // 0x7bd            
            uint8_t _pad07be[0x42]; // 0x7be
            // m_vecRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::RelationshipOverride_t> m_vecRelationships;
            char m_vecRelationships[0x18]; // 0x800            
            CUtlSymbolLarge m_strRelationships; // 0x818            
            source2sdk::client::Hull_t m_eHull; // 0x820            
            std::uint32_t m_nNavHullIdx; // 0x824            
            source2sdk::server::CMovementStatsProperty m_movementStats; // 0x828            
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetRelationship; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCombatCharacter) == 0x868);
    };
};
