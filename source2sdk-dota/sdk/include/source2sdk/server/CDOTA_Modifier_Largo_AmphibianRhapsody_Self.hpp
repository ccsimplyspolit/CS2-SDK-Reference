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
        // Size: 0x1b78
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
            uint8_t _pad1abd[0x3]; // 0x1abd
            char* arrOriginalQWEAbilityNames[3]; // 0x1ac0            
            char* arrCurrentQWEAbilityNames[3]; // 0x1ad8            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1af0            
            uint8_t _pad1af4[0x4]; // 0x1af4
            source2sdk::server::CountdownTimer m_rhythmTimer; // 0x1af8            
            std::int32_t m_nCurrentRhythmWindow; // 0x1b10            
            uint8_t _pad1b14[0x4]; // 0x1b14
            // m_vecSuccessfulBursts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecSuccessfulBursts;
            char m_vecSuccessfulBursts[0x18]; // 0x1b18            
            // m_vecMissedBursts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_vecMissedBursts;
            char m_vecMissedBursts[0x18]; // 0x1b30            
            float m_flLatencyAllowance; // 0x1b48            
            bool m_bPlayedStopSound; // 0x1b4c            
            bool m_bCanceledByEnemy; // 0x1b4d            
            uint8_t _pad1b4e[0x2]; // 0x1b4e
            source2sdk::server::CountdownTimer m_doubleSongTimer; // 0x1b50            
            std::int32_t m_nConsecutiveBursts; // 0x1b68            
            bool m_bSpokeConcept; // 0x1b6c            
            uint8_t _pad1b6d[0x3]; // 0x1b6d
            // m_pFirstStrumSong has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Ability_Largo_AmphibianRhapsody_Song> m_pFirstStrumSong;
            char m_pFirstStrumSong[0x4]; // 0x1b70            
            uint8_t _pad1b74[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Largo_AmphibianRhapsody_Self because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Largo_AmphibianRhapsody_Self) == 0x1b78);
    };
};
