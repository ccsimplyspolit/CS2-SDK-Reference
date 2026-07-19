#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Creep.hpp"
#include "source2sdk/server/CreatureAbilityData_t.hpp"
#include "source2sdk/server/CreatureStateData_t.hpp"
#include "source2sdk/server/WearableData_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTABaseAbility;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct ItemDropData_t;
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
        // Size: 0x1a20
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Creature : public source2sdk::server::CDOTA_BaseNPC_Creep
        {
        public:
            bool m_bInitialized; // 0x18d0            
            bool m_bCreatureCanRespawn; // 0x18d1            
            bool m_bUsesGestureBasedAttackAnimation; // 0x18d2            
            bool m_bIsHybridFlyer; // 0x18d3            
            bool m_bRequiresReachingEndPath; // 0x18d4            
            bool m_bAggroOwnerOnDamage; // 0x18d5            
            bool m_bReceivedAggroOnDamageOrder; // 0x18d6            
            uint8_t _pad18d7[0x1]; // 0x18d7
            // m_vCreatureStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureStateData_t> m_vCreatureStates;
            char m_vCreatureStates[0x18]; // 0x18d8            
            char* m_pszDefaultState; // 0x18f0            
            char* m_pszCurrentState; // 0x18f8            
            std::int32_t m_nHPGain; // 0x1900            
            std::int32_t m_nManaGain; // 0x1904            
            float m_flHPRegenGain; // 0x1908            
            float m_flManaRegenGain; // 0x190c            
            std::int32_t m_nDamageGain; // 0x1910            
            float m_flArmorGain; // 0x1914            
            float m_flMagicResistGain; // 0x1918            
            float m_flDisableResistGain; // 0x191c            
            float m_flAttackTimeGain; // 0x1920            
            std::int32_t m_nMoveSpeedGain; // 0x1924            
            std::int32_t m_nBountyGain; // 0x1928            
            std::int32_t m_nXPGain; // 0x192c            
            std::int32_t m_nPermanentDesire; // 0x1930            
            std::int32_t m_nCreatureDesire; // 0x1934            
            std::int32_t m_nCurrentCastBehavior; // 0x1938            
            std::int32_t m_nEconItemGroup; // 0x193c            
            bool m_bIsBuildingAggressive; // 0x1940            
            bool m_bIsHeroAggressive; // 0x1941            
            bool m_bDisableClumpingBehavior; // 0x1942            
            uint8_t _pad1943[0x1]; // 0x1943
            float m_flDisableResistance; // 0x1944            
            float m_flUltimateDisableResistance; // 0x1948            
            bool m_bHasOffensiveAbility; // 0x194c            
            uint8_t _pad194d[0x3]; // 0x194d
            // m_vOffensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vOffensiveAbilities;
            char m_vOffensiveAbilities[0x18]; // 0x1950            
            bool m_bHasDefensiveAbility; // 0x1968            
            uint8_t _pad1969[0x7]; // 0x1969
            // m_vDefensiveAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vDefensiveAbilities;
            char m_vDefensiveAbilities[0x18]; // 0x1970            
            bool m_bHasEscapeAbility; // 0x1988            
            uint8_t _pad1989[0x7]; // 0x1989
            // m_vEscapeAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CreatureAbilityData_t> m_vEscapeAbilities;
            char m_vEscapeAbilities[0x18]; // 0x1990            
            source2sdk::server::CDOTABaseAbility* m_pLastUsedAbility; // 0x19a8            
            VectorWS m_vDesiredCastLocation; // 0x19b0            
            uint8_t _pad19bc[0x4]; // 0x19bc
            source2sdk::server::CDOTA_BaseNPC* m_pDesiredNPCTarget; // 0x19c0            
            source2sdk::server::CDOTA_BaseNPC* m_pEscortTarget; // 0x19c8            
            VectorWS m_vLastDamageSource; // 0x19d0            
            bool m_bIsChampion; // 0x19dc            
            uint8_t _pad19dd[0x3]; // 0x19dd
            // m_vItemDropData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::ItemDropData_t*> m_vItemDropData;
            char m_vItemDropData[0x18]; // 0x19e0            
            // m_vecAttachWearableItemDefs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::WearableData_t> m_vecAttachWearableItemDefs;
            char m_vecAttachWearableItemDefs[0x18]; // 0x19f8            
            source2sdk::entity2::GameTime_t m_flRespawnTime; // 0x1a10            
            bool m_bIsCurrentlyChanneling; // 0x1a14            
            uint8_t _pad1a15[0x3]; // 0x1a15
            float m_flChannelCycle; // 0x1a18            
            uint8_t _pad1a1c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Creature because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Creature) == 0x1a20);
    };
};
