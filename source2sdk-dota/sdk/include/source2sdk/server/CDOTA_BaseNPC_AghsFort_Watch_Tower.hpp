#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimatingActivity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Effigy_AghsFort;
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
        // Size: 0x1a30
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_AghsFort_Watch_Tower : public source2sdk::server::CDOTA_BaseNPC_Building
        {
        public:
            uint8_t _pad19c0[0x10]; // 0x19c0
            std::int32_t m_nOptionNumber; // 0x19d0
            float m_flMovePlayersRadius; // 0x19d4
            source2sdk::server::CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t m_nExitDirection; // 0x19d8
            Vector m_vExitLocation; // 0x19dc
            std::int32_t m_nPathSelectedID; // 0x19e8
            std::int32_t m_nEncounterType; // 0x19ec
            bool m_bIsEliteEncounter; // 0x19f0
            bool m_bIsAscensionLevelPicker; // 0x19f1
            uint8_t _pad19f2[0x6]; // 0x19f2
            CUtlSymbolLarge m_strEncounterName; // 0x19f8
            CUtlSymbolLarge m_strAscensionAbilities; // 0x1a00
            // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEffigy;
            char m_hEffigy[0x4]; // 0x1a08
            std::int32_t m_nDepth; // 0x1a0c
            // m_hPedestal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Effigy_AghsFort> m_hPedestal;
            char m_hPedestal[0x4]; // 0x1a10
            // m_hParticleSystem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hParticleSystem;
            char m_hParticleSystem[0x4]; // 0x1a14
            uint8_t _pad1a18[0x8]; // 0x1a18
            // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimatingActivity> m_hRoomGate;
            char m_hRoomGate[0x4]; // 0x1a20
            bool m_bIsBeingChanneled; // 0x1a24
            uint8_t _pad1a25[0x3]; // 0x1a25
            float m_flGoalCaptureProgress; // 0x1a28
            uint8_t _pad1a2c[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x1a30);
    };
};
