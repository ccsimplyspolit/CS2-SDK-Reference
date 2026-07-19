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
        // Size: 0x1ae8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1a58            
            float duration; // 0x1a5c            
            float rhythm_interval; // 0x1a60            
            float rhythm_grace_period; // 0x1a64            
            float armor_per_stack; // 0x1a68            
            std::int32_t max_stacks; // 0x1a6c            
            float stack_duration; // 0x1a70            
            std::int32_t double_song; // 0x1a74            
            std::int32_t stack_decrement_on_exit; // 0x1a78            
            uint8_t _pad1a7c[0x30]; // 0x1a7c
            source2sdk::client::AmphibianRhapsodySong_t m_nCurrentSong; // 0x1aac            
            source2sdk::client::AmphibianRhapsodySong_t m_nCurrentSecondSong; // 0x1ab0            
            std::int32_t m_nCurrentSongMusicTrack; // 0x1ab4            
            float m_flAnticipatePoseTime; // 0x1ab8            
            bool m_bPlayFinishSongSound; // 0x1abc            
            uint8_t _pad1abd[0x13]; // 0x1abd
            bool bRhythmFXStarted; // 0x1ad0            
            uint8_t _pad1ad1[0x3]; // 0x1ad1
            float m_flNextRestartParticleTime; // 0x1ad4            
            std::int32_t m_iPoseParameterAnticipation; // 0x1ad8            
            float m_flLastPoseTime; // 0x1adc            
            bool m_bMusicStarted; // 0x1ae0            
            uint8_t _pad1ae1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_AmphibianRhapsody_Self because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Largo_AmphibianRhapsody_Self) == 0x1ae8);
    };
};
