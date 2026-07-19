#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelMusicChord_t.hpp"
#include "source2sdk/client/CitadelMusicSyncMode_t.hpp"
#include "source2sdk/client/EMusicState_t.hpp"

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
        // Size: 0x98
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelMusicCueData_t
        {
        public:
            CSoundEventName m_strSoundEvent; // 0x0            
            source2sdk::client::EMusicState_t m_nDeferState; // 0x10            
            float m_flBpm; // 0x14            
            bool m_bInterruptStop; // 0x18            
            bool m_bSetToNoneStateWhenFinished; // 0x19            
            uint8_t _pad001a[0x2]; // 0x1a
            source2sdk::client::CitadelMusicSyncMode_t m_nSyncMode; // 0x1c            
            // m_SyncTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_SyncTimes;
            char m_SyncTimes[0x18]; // 0x20            
            float m_flSyncOffset; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            // m_Chords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,source2sdk::client::CitadelMusicChord_t> m_Chords;
            char m_Chords[0x28]; // 0x40            
            // m_Arpeggiators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_Arpeggiators;
            char m_Arpeggiators[0x18]; // 0x68            
            uint8_t _pad0080[0x18];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_strSoundEvent) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_nDeferState) == 0x10);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_flBpm) == 0x14);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_bInterruptStop) == 0x18);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_bSetToNoneStateWhenFinished) == 0x19);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_nSyncMode) == 0x1c);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_SyncTimes) == 0x20);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_flSyncOffset) == 0x38);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_Chords) == 0x40);
        static_assert(offsetof(source2sdk::client::CitadelMusicCueData_t, m_Arpeggiators) == 0x68);
        
        static_assert(sizeof(source2sdk::client::CitadelMusicCueData_t) == 0x98);
    };
};
