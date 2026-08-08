#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmphibianRhapsodySong_t.hpp"
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1b08
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
            uint8_t _pad1add[0x13]; // 0x1add
            bool bRhythmFXStarted; // 0x1af0
            uint8_t _pad1af1[0x3]; // 0x1af1
            float m_flNextRestartParticleTime; // 0x1af4
            std::int32_t m_iPoseParameterAnticipation; // 0x1af8
            float m_flLastPoseTime; // 0x1afc
            bool m_bMusicStarted; // 0x1b00
            uint8_t _pad1b01[0x7];
        };
        #pragma pack(pop)

        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_AmphibianRhapsody_Self because it is not a standard-layout class

        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Largo_AmphibianRhapsody_Self) == 0x1b08);
    };
};
