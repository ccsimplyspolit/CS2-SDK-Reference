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
        // Size: 0x1a98
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_AghsFort_Watch_Tower : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            std::int32_t m_nOptionNumber; // 0x1a20            
            float m_flMovePlayersRadius; // 0x1a24            
            source2sdk::client::CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t m_nExitDirection; // 0x1a28            
            Vector m_vExitLocation; // 0x1a2c            
            std::int32_t m_nPathSelectedID; // 0x1a38            
            std::int32_t m_nEncounterType; // 0x1a3c            
            bool m_bIsEliteEncounter; // 0x1a40            
            bool m_bIsAscensionLevelPicker; // 0x1a41            
            uint8_t _pad1a42[0x6]; // 0x1a42
            CUtlSymbolLarge m_strEncounterName; // 0x1a48            
            CUtlSymbolLarge m_strAscensionAbilities; // 0x1a50            
            // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEffigy;
            char m_hEffigy[0x4]; // 0x1a58            
            float m_flYaw; // 0x1a5c            
            float m_flStartTime; // 0x1a60            
            source2sdk::entity2::GameTime_t m_flCursorEnterTime; // 0x1a64            
            bool m_bShowingTooltip; // 0x1a68            
            uint8_t _pad1a69[0x1b]; // 0x1a69
            float m_flLastUpdateTime; // 0x1a84            
            source2sdk::client::ParticleIndex_t m_nChannellingParticle; // 0x1a88            
            // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimatingActivity> m_hRoomGate;
            char m_hRoomGate[0x4]; // 0x1a8c            
            bool m_bIsBeingChanneled; // 0x1a90            
            uint8_t _pad1a91[0x3]; // 0x1a91
            float m_flGoalCaptureProgress; // 0x1a94            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x1a98);
    };
};
