#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/DOTA_LANE.hpp"
#include "source2sdk/client/FowCustomTeams_t.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CDOTA_BaseNPC.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

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
        // Size: 0x19c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Building : public source2sdk::server::CDOTA_BaseNPC
        {
        public:
            std::int32_t m_iDamageLevel; // 0x18a8
            uint8_t _pad18ac[0x4]; // 0x18ac
            // m_nFXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndex;
            char m_nFXIndex[0x8]; // 0x18b0
            // m_nFXIndexDestruction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nFXIndexDestruction;
            char m_nFXIndexDestruction[0x8]; // 0x18b8
            QAngle m_angInitialAngles; // 0x18c0
            source2sdk::animationsystem::HSequence m_hHeroStatueSequence; // 0x18cc
            source2sdk::animationsystem::HSequence m_hConstantLayerSequence; // 0x18d0
            float m_fHeroStatueCycle; // 0x18d4
            std::int32_t m_iHeroStatueStatusEffectIndex; // 0x18d8
            bool m_bHeroStatue; // 0x18dc
            bool m_bBattleCup; // 0x18dd
            char m_HeroStatueInscription[32]; // 0x18de
            uint8_t _pad18fe[0x2]; // 0x18fe
            source2sdk::client::PlayerID_t m_iHeroStatueOwnerPlayerID; // 0x1900
            Color m_ParticleTintColor; // 0x1904
            CGameSoundEventName m_sDestroySnd; // 0x1908
            CGameSoundEventName m_sDmgLvl1Snd; // 0x1910
            CGameSoundEventName m_sDmgLvl2Snd; // 0x1918
            CUtlSymbolLarge m_iszLinkedUnit; // 0x1920
            CUtlSymbolLarge m_iszAmbientEffectName; // 0x1928
            CUtlSymbolLarge m_iszDestructionEffectName; // 0x1930
            CUtlSymbolLarge m_iszDamageModelLevel1; // 0x1938
            CUtlSymbolLarge m_iszDamageModelLevel2; // 0x1940
            CUtlSymbolLarge m_iszDamageEffectLevel1; // 0x1948
            CUtlSymbolLarge m_iszDamageEffectLevel2; // 0x1950
            float m_flDamageThresholdLevel1; // 0x1958
            float m_flDamageThresholdLevel2; // 0x195c
            bool m_bVulnerableOnCreepSpawn; // 0x1960
            bool m_bHasOverriddenDestructionEffect; // 0x1961
            uint8_t _pad1962[0x2]; // 0x1962
            std::int32_t m_iUpgradeIdentifier; // 0x1964
            std::int32_t m_iInvulnCount; // 0x1968
            std::int32_t m_iPlayerOwner; // 0x196c
            bool m_bIsDireSide; // 0x1970
            uint8_t _pad1971[0x3]; // 0x1971
            source2sdk::client::DOTA_LANE m_Lane; // 0x1974
            float m_fAmountAlongLane[2]; // 0x1978
            Vector m_vOverrideInitialAngles; // 0x1980
            Vector m_vOverrideInitialAnglesBG; // 0x198c
            std::int32_t m_nOverrideInitialAngles; // 0x1998
            uint8_t _pad199c[0x4]; // 0x199c
            source2sdk::server::CountdownTimer m_IdleRareAnimationTime; // 0x19a0
            source2sdk::client::FowCustomTeams_t m_nFoWTeam; // 0x19b8
            uint8_t _pad19bc[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_BaseNPC_Building because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Building) == 0x19c0);
    };
};
