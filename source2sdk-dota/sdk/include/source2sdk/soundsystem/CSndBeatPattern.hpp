#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/SndBeatEventKeyedFloats_t.hpp"
#include "source2sdk/soundsystem/SndBeatEventKeyedMidiNotes_t.hpp"
#include "source2sdk/soundsystem/SndBeatEventKeyedSndEvts_t.hpp"
#include "source2sdk/soundsystem/SndBeatEventKeys_t.hpp"
#include "source2sdk/soundsystem/SndBeatEventType_t.hpp"
#include "source2sdk/soundsystem/SndBeatKeyType_t.hpp"
#include "source2sdk/soundsystem/SndBeatSyncStartType_t.hpp"
#include "source2sdk/soundsystem/SndBeatSyncType_t.hpp"
#include "source2sdk/soundsystem/SndBeatTimeSignature_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0xb8
        // Construct allowed
        // 
        // static metadata: MPropertyArrayElementNameKey "m_name"
        // static metadata: MVDataAnonymousNode
        // static metadata: MVDataOutlinerNameExpr
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSndBeatPattern
        {
        public:
            // metadata: MPropertyFriendlyName "Pattern Name"
            CUtlString m_name; // 0x0            
            uint8_t _pad0008[0x4]; // 0x8
            // metadata: MPropertyFriendlyName "Pattern Priority"
            float m_flSyncPriority; // 0xc            
            // metadata: MPropertyFriendlyName "Sync Start Type"
            source2sdk::soundsystem::SndBeatSyncStartType_t m_syncStartType; // 0x10            
            // metadata: MPropertyFriendlyName "Sync Type"
            source2sdk::soundsystem::SndBeatSyncType_t m_syncType; // 0x14            
            // metadata: MPropertyFriendlyName "Time Signature"
            source2sdk::soundsystem::SndBeatTimeSignature_t m_timeSignature; // 0x18            
            uint8_t _pad001a[0x6]; // 0x1a
            // metadata: MPropertyFriendlyName "Length (beats)"
            float m_flLength; // 0x20            
            // metadata: MPropertyFriendlyName "Looping"
            bool m_bLooping; // 0x24            
            uint8_t _pad0025[0x3]; // 0x25
            // metadata: MPropertyStartGroup "Playback"
            // metadata: MPropertyFriendlyName "Playback Event Type"
            source2sdk::soundsystem::SndBeatEventType_t m_playEventType; // 0x28            
            // metadata: MPropertySuppressExpr "m_playEventType == eSndBeatEventTypeKeys"
            // metadata: MPropertyFriendlyName "Playback Event Beat/Bar/Phrase/Length Multiplier"
            float m_flPlayBeatMult; // 0x2c            
            // metadata: MPropertySuppressExpr "m_playEventType != eSndBeatEventTypeKeys"
            // metadata: MPropertyFriendlyName "Key Type"
            source2sdk::soundsystem::SndBeatKeyType_t m_playKeyType; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            // metadata: MPropertySuppressExpr "m_playKeyType != eSndBeatPatternTypeKeys"
            // m_vecPatternKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SndBeatEventKeys_t> m_vecPatternKeys;
            char m_vecPatternKeys[0x18]; // 0x38            
            // metadata: MPropertySuppressExpr "m_playKeyType != eSndBeatPatternTypeKeyedFloats"
            // m_vecPatternFloats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SndBeatEventKeyedFloats_t> m_vecPatternFloats;
            char m_vecPatternFloats[0x18]; // 0x50            
            // metadata: MPropertySuppressExpr "m_playKeyType != eSndBeatPatternTypeKeyedSndEvts"
            // m_vecPatternSndEvts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SndBeatEventKeyedSndEvts_t> m_vecPatternSndEvts;
            char m_vecPatternSndEvts[0x18]; // 0x68            
            // metadata: MPropertySuppressExpr "m_playKeyType != eSndBeatPatternTypeKeyedMidi"
            // m_vecPatternMidi has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SndBeatEventKeyedMidiNotes_t> m_vecPatternMidi;
            char m_vecPatternMidi[0x18]; // 0x80            
            // metadata: MPropertyStartGroup "Queue"
            // metadata: MPropertyFriendlyName "Queue Event Type"
            source2sdk::soundsystem::SndBeatEventType_t m_syncEventType; // 0x98            
            // metadata: MPropertySuppressExpr "m_syncEventType == eSndBeatEventTypeKeys"
            // metadata: MPropertyFriendlyName "Queue Beat/Bar/Phrase/Length Multiplier"
            float m_flSyncBeatMult; // 0x9c            
            // metadata: MPropertySuppressExpr "m_syncEventType != eSndBeatEventTypeKeys"
            // m_vecSyncPatternKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::SndBeatEventKeys_t> m_vecSyncPatternKeys;
            char m_vecSyncPatternKeys[0x18]; // 0xa0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_name) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_flSyncPriority) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_syncStartType) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_syncType) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_timeSignature) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_flLength) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_bLooping) == 0x24);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_playEventType) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_flPlayBeatMult) == 0x2c);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_playKeyType) == 0x30);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_vecPatternKeys) == 0x38);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_vecPatternFloats) == 0x50);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_vecPatternSndEvts) == 0x68);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_vecPatternMidi) == 0x80);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_syncEventType) == 0x98);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_flSyncBeatMult) == 0x9c);
        static_assert(offsetof(source2sdk::soundsystem::CSndBeatPattern, m_vecSyncPatternKeys) == 0xa0);
        
        static_assert(sizeof(source2sdk::soundsystem::CSndBeatPattern) == 0xb8);
    };
};
