#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t.hpp"
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimatingActivity;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1aa0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_AghsFort_Watch_Tower : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            std::int32_t m_nOptionNumber; // 0x1a28
            float m_flMovePlayersRadius; // 0x1a2c
            source2sdk::client::CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t m_nExitDirection; // 0x1a30
            Vector m_vExitLocation; // 0x1a34
            std::int32_t m_nPathSelectedID; // 0x1a40
            std::int32_t m_nEncounterType; // 0x1a44
            bool m_bIsEliteEncounter; // 0x1a48
            bool m_bIsAscensionLevelPicker; // 0x1a49
            uint8_t _pad1a4a[0x6]; // 0x1a4a
            CUtlSymbolLarge m_strEncounterName; // 0x1a50
            CUtlSymbolLarge m_strAscensionAbilities; // 0x1a58
            // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEffigy;
            char m_hEffigy[0x4]; // 0x1a60
            float m_flYaw; // 0x1a64
            float m_flStartTime; // 0x1a68
            source2sdk::entity2::GameTime_t m_flCursorEnterTime; // 0x1a6c
            bool m_bShowingTooltip; // 0x1a70
            uint8_t _pad1a71[0x1b]; // 0x1a71
            float m_flLastUpdateTime; // 0x1a8c
            source2sdk::client::ParticleIndex_t m_nChannellingParticle; // 0x1a90
            // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimatingActivity> m_hRoomGate;
            char m_hRoomGate[0x4]; // 0x1a94
            bool m_bIsBeingChanneled; // 0x1a98
            uint8_t _pad1a99[0x3]; // 0x1a99
            float m_flGoalCaptureProgress; // 0x1a9c
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x1aa0);
    };
};
