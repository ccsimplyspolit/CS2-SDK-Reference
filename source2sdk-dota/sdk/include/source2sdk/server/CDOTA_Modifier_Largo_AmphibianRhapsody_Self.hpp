#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmphibianRhapsodySong_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Ability_Largo_AmphibianRhapsody_Song;
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1b98
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a78
            float duration; // 0x1a7c
            float rhythm_interval; // 0x1a80
            float rhythm_grace_period; // 0x1a84
            float armor_per_stack; // 0x1a88
            std::int32_t max_stacks; // 0x1a8c
            float stack_duration; // 0x1a90
            std::int32_t double_song; // 0x1a94
            std::int32_t stack_decrement_on_exit; // 0x1a98
            uint8_t _pad1a9c[0x30]; // 0x1a9c
            source2sdk::client::AmphibianRhapsodySong_t m_nCurrentSong; // 0x1acc
            source2sdk::client::AmphibianRhapsodySong_t m_nCurrentSecondSong; // 0x1ad0
            std::int32_t m_nCurrentSongMusicTrack; // 0x1ad4
            float m_flAnticipatePoseTime; // 0x1ad8
            bool m_bPlayFinishSongSound; // 0x1adc
            uint8_t _pad1add[0x3]; // 0x1add
            char* arrOriginalQWEAbilityNames[3]; // 0x1ae0
            char* arrCurrentQWEAbilityNames[3]; // 0x1af8
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1b10
            uint8_t _pad1b14[0x4]; // 0x1b14
            source2sdk::server::CountdownTimer m_rhythmTimer; // 0x1b18
            std::int32_t m_nCurrentRhythmWindow; // 0x1b30
            uint8_t _pad1b34[0x4]; // 0x1b34
            // m_vecSuccessfulBursts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecSuccessfulBursts;
            char m_vecSuccessfulBursts[0x18]; // 0x1b38
            // m_vecMissedBursts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecMissedBursts;
            char m_vecMissedBursts[0x18]; // 0x1b50
            float m_flLatencyAllowance; // 0x1b68
            bool m_bPlayedStopSound; // 0x1b6c
            bool m_bCanceledByEnemy; // 0x1b6d
            uint8_t _pad1b6e[0x2]; // 0x1b6e
            source2sdk::server::CountdownTimer m_doubleSongTimer; // 0x1b70
            std::int32_t m_nConsecutiveBursts; // 0x1b88
            bool m_bSpokeConcept; // 0x1b8c
            uint8_t _pad1b8d[0x3]; // 0x1b8d
            // m_pFirstStrumSong has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Ability_Largo_AmphibianRhapsody_Song> m_pFirstStrumSong;
            char m_pFirstStrumSong[0x4]; // 0x1b90
            uint8_t _pad1b94[0x4];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_AmphibianRhapsody_Self because it is not a standard-layout class

        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Largo_AmphibianRhapsody_Self) == 0x1b98);
    };
};
