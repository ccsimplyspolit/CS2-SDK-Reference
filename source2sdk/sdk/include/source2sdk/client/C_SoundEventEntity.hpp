#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

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
        // Size: 0x6c0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_SoundEventEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bStartOnSpawn; // 0x600            
            bool m_bToLocalPlayer; // 0x601            
            bool m_bStopOnNew; // 0x602            
            bool m_bSaveRestore; // 0x603            
            bool m_bSavedIsPlaying; // 0x604            
            uint8_t _pad0605[0x3]; // 0x605
            float m_flSavedElapsedTime; // 0x608            
            uint8_t _pad060c[0x4]; // 0x60c
            CUtlSymbolLarge m_iszSourceEntityName; // 0x610            
            CUtlSymbolLarge m_iszAttachmentName; // 0x618            
            // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<SndOpEventGuid_t> m_onGUIDChanged;
            char m_onGUIDChanged[0x30]; // 0x620            
            source2sdk::entity2::CEntityIOOutput m_onSoundFinished; // 0x650            
            float m_flClientCullRadius; // 0x668            
            uint8_t _pad066c[0x2c]; // 0x66c
            CUtlSymbolLarge m_iszSoundName; // 0x698            
            uint8_t _pad06a0[0x14]; // 0x6a0
            CEntityHandle m_hSource; // 0x6b4            
            std::int32_t m_nEntityIndexSelection; // 0x6b8            
            // start of bitfield block
            // metadata: MNotSaved
            uint8_t m_bClientSideOnly: 1;
            // end of bitfield block// 1 bits
            uint8_t _pad06bd[0x3];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSoundName; // 0x0
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // CUtlSymbolLarge InputStartSoundOnAllClients; // 0x0
            // int32_t InputStartSoundOnSingleClient; // 0x0
            // bool InputPauseSound; // 0x0
            // bool InputUnPauseSound; // 0x0
            // void InputStopSound; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundEventEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundEventEntity) == 0x6c0);
    };
};
