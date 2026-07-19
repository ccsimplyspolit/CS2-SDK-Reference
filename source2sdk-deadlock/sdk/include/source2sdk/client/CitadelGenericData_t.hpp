#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CurrencySound_t.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"
#include "source2sdk/client/DamageFlashSettings_t.hpp"
#include "source2sdk/client/DamageIndicatorSounds_t.hpp"
#include "source2sdk/client/DamageReceivedSounds_t.hpp"
#include "source2sdk/client/EAbilityResourceType.hpp"
#include "source2sdk/client/ECurrencyType.hpp"
#include "source2sdk/client/EDamageFlashType.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/GameModeStreetBrawl_t.hpp"
#include "source2sdk/client/GlitchSettings_t.hpp"
#include "source2sdk/client/HealingReceivedSounds_t.hpp"
#include "source2sdk/client/HeroAbilityResourceDef_t.hpp"
#include "source2sdk/client/IdolParams_t.hpp"
#include "source2sdk/client/KothParams_t.hpp"
#include "source2sdk/client/LaneDesc_t.hpp"
#include "source2sdk/client/MinimapOffsetDesc_t.hpp"
#include "source2sdk/client/NewPlayerMetrics_t.hpp"
#include "source2sdk/client/ObjectivesParams_t.hpp"
#include "source2sdk/client/RejuvinatorParams_t.hpp"
#include "source2sdk/client/ShopGroups_t.hpp"
#include "source2sdk/client/TeleporterParams_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Standard-layout class: true
        // Size: 0x1648
        // 
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelGenericData_t
        {
        public:
            // m_mapDamageFlash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EDamageFlashType,source2sdk::client::DamageFlashSettings_t> m_mapDamageFlash;
            char m_mapDamageFlash[0x28]; // 0x0            
            // m_mapDamageFlashLowViolence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EDamageFlashType,source2sdk::client::DamageFlashSettings_t> m_mapDamageFlashLowViolence;
            char m_mapDamageFlashLowViolence[0x28]; // 0x28            
            source2sdk::client::GlitchSettings_t m_GlitchSettings; // 0x50            
            uint8_t _pad007c[0x4]; // 0x7c
            // metadata: MPropertyStartGroup "Sounds"
            // m_CurrencyTypeSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::ECurrencyType,source2sdk::client::CurrencySound_t> m_CurrencyTypeSounds;
            char m_CurrencyTypeSounds[0x28]; // 0x80            
            source2sdk::client::DamageReceivedSounds_t m_DamageReceivedSounds; // 0xa8            
            source2sdk::client::HealingReceivedSounds_t m_HealingReceivedSounds; // 0x108            
            source2sdk::client::DamageIndicatorSounds_t m_DamageIndicatorSounds; // 0x168            
            CSoundEventName m_strExitCombatSound; // 0x1c8            
            // metadata: MPropertyStartGroup "Particles and Visuals"
            // m_ShoppingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShoppingEffect;
            char m_ShoppingEffect[0xe0]; // 0x1d8            
            // m_MinimapZiplinesParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MinimapZiplinesParticle;
            char m_MinimapZiplinesParticle[0xe0]; // 0x2b8            
            // m_KillStreakFireParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillStreakFireParticle;
            char m_KillStreakFireParticle[0xe0]; // 0x398            
            // m_MidbossIndicatorRespawningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MidbossIndicatorRespawningParticle;
            char m_MidbossIndicatorRespawningParticle[0xe0]; // 0x478            
            // m_MidbossIndicatorSpawnedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MidbossIndicatorSpawnedParticle;
            char m_MidbossIndicatorSpawnedParticle[0xe0]; // 0x558            
            // metadata: MPropertyStartGroup "MiniMap"
            Color m_MinimapTeamRebelsColor; // 0x638            
            Color m_MinimapTeamCombineColor; // 0x63c            
            // m_MiniMapOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::MinimapOffsetDesc_t> m_MiniMapOffsets;
            char m_MiniMapOffsets[0x18]; // 0x640            
            // metadata: MPropertyStartGroup "Outline Colors"
            // metadata: MPropertyColorPlusAlpha
            Color m_OutlineColorFriend; // 0x658            
            // metadata: MPropertyColorPlusAlpha
            Color m_OutlineColorEnemy; // 0x65c            
            // metadata: MPropertyColorPlusAlpha
            Color m_OutlineColorEnemyHero; // 0x660            
            // metadata: MPropertyColorPlusAlpha
            Color m_OutlineColorTeam1; // 0x664            
            // metadata: MPropertyColorPlusAlpha
            Color m_OutlineColorTeam2; // 0x668            
            // metadata: MPropertyColorPlusAlpha
            Color m_OutlineColorNeutral; // 0x66c            
            // metadata: MPropertyStartGroup
            source2sdk::client::LaneDesc_t m_LaneInfo[7]; // 0x670            
            source2sdk::client::LaneDesc_t m_NoLaneZip; // 0x750            
            Color m_enemyZiplineColor; // 0x770            
            Color m_enemyObjectivesColor; // 0x774            
            source2sdk::client::NewPlayerMetrics_t m_NewPlayerMetrics[4]; // 0x778            
            std::int32_t m_nItemPricePerTier[6]; // 0x838            
            float m_flTrooperKillGoldShareFrac[6]; // 0x850            
            float m_flHeroKillGoldShareFrac[6]; // 0x868            
            source2sdk::client::DOFDesc_t m_DefaultDOF; // 0x880            
            source2sdk::client::RejuvinatorParams_t m_RejuvParams; // 0x890            
            source2sdk::client::IdolParams_t m_IdolParams; // 0x8f0            
            source2sdk::client::KothParams_t m_KothParams; // 0xe68            
            source2sdk::client::TeleporterParams_t m_TeleporterParams; // 0x1150            
            source2sdk::client::ObjectivesParams_t m_ObjectiveParams; // 0x1340            
            // m_mapStatTypeImages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EStatsType,CUtlString> m_mapStatTypeImages;
            char m_mapStatTypeImages[0x28]; // 0x1370            
            // metadata: MPropertyDescription "Remap camera angle delta to aim spring strength"
            source2sdk::client::CRemapFloat m_AimSpringStrength; // 0x1398            
            // metadata: MPropertyDescription "Remap camera angle delta to ability targeting spring strength"
            source2sdk::client::CRemapFloat m_TargetingSpringStrength; // 0x13a8            
            // m_mapResourceTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EAbilityResourceType,source2sdk::client::HeroAbilityResourceDef_t> m_mapResourceTypes;
            char m_mapResourceTypes[0x28]; // 0x13b8            
            // metadata: MPropertyStartGroup "New Shop Groups"
            // m_vecWeaponGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ShopGroups_t> m_vecWeaponGroups;
            char m_vecWeaponGroups[0x18]; // 0x13e0            
            // m_vecArmorGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ShopGroups_t> m_vecArmorGroups;
            char m_vecArmorGroups[0x18]; // 0x13f8            
            // m_vecSpiritGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ShopGroups_t> m_vecSpiritGroups;
            char m_vecSpiritGroups[0x18]; // 0x1410            
            // metadata: MPropertyStartGroup "Street Brawl"
            source2sdk::client::GameModeStreetBrawl_t m_StreetBrawl; // 0x1428            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_mapDamageFlash) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_mapDamageFlashLowViolence) == 0x28);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_GlitchSettings) == 0x50);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_CurrencyTypeSounds) == 0x80);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_DamageReceivedSounds) == 0xa8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_HealingReceivedSounds) == 0x108);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_DamageIndicatorSounds) == 0x168);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_strExitCombatSound) == 0x1c8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_ShoppingEffect) == 0x1d8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MinimapZiplinesParticle) == 0x2b8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_KillStreakFireParticle) == 0x398);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MidbossIndicatorRespawningParticle) == 0x478);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MidbossIndicatorSpawnedParticle) == 0x558);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MinimapTeamRebelsColor) == 0x638);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MinimapTeamCombineColor) == 0x63c);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_MiniMapOffsets) == 0x640);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_OutlineColorFriend) == 0x658);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_OutlineColorEnemy) == 0x65c);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_OutlineColorEnemyHero) == 0x660);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_OutlineColorTeam1) == 0x664);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_OutlineColorTeam2) == 0x668);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_OutlineColorNeutral) == 0x66c);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_LaneInfo) == 0x670);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_NoLaneZip) == 0x750);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_enemyZiplineColor) == 0x770);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_enemyObjectivesColor) == 0x774);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_NewPlayerMetrics) == 0x778);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_nItemPricePerTier) == 0x838);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_flTrooperKillGoldShareFrac) == 0x850);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_flHeroKillGoldShareFrac) == 0x868);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_DefaultDOF) == 0x880);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_RejuvParams) == 0x890);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_IdolParams) == 0x8f0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_KothParams) == 0xe68);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_TeleporterParams) == 0x1150);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_ObjectiveParams) == 0x1340);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_mapStatTypeImages) == 0x1370);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_AimSpringStrength) == 0x1398);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_TargetingSpringStrength) == 0x13a8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_mapResourceTypes) == 0x13b8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_vecWeaponGroups) == 0x13e0);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_vecArmorGroups) == 0x13f8);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_vecSpiritGroups) == 0x1410);
        static_assert(offsetof(source2sdk::client::CitadelGenericData_t, m_StreetBrawl) == 0x1428);
        
        static_assert(sizeof(source2sdk::client::CitadelGenericData_t) == 0x1648);
    };
};
