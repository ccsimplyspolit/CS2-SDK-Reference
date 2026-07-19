#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVsndTriggerSlot.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Vsnd Trigger"
        // static metadata: MPropertyDescription "Plays vsnds based on trigger parameter changes."
        #pragma pack(push, 1)
        class CVoiceContainerVsndTrigger : public source2sdk::soundsystem_voicecontainers::CVoiceContainerBase
        {
        public:
            // metadata: MPropertyFriendlyName "Namespace"
            CUtlString m_namespace; // 0x70            
            // metadata: MPropertyFriendlyName "Vsnd 01"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot1; // 0x78            
            // metadata: MPropertyFriendlyName "Vsnd 02"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot2; // 0x100            
            // metadata: MPropertyFriendlyName "Vsnd 03"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot3; // 0x188            
            // metadata: MPropertyFriendlyName "Vsnd 04"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot4; // 0x210            
            // metadata: MPropertyFriendlyName "Vsnd 05"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot5; // 0x298            
            // metadata: MPropertyFriendlyName "Vsnd 06"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot6; // 0x320            
            // metadata: MPropertyFriendlyName "Vsnd 07"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot7; // 0x3a8            
            // metadata: MPropertyFriendlyName "Vsnd 08"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot8; // 0x430            
            // metadata: MPropertyFriendlyName "Vsnd 09"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot9; // 0x4b8            
            // metadata: MPropertyFriendlyName "Vsnd 10"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot10; // 0x540            
            // metadata: MPropertyFriendlyName "Vsnd 11"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot11; // 0x5c8            
            // metadata: MPropertyFriendlyName "Vsnd 12"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot12; // 0x650            
            // metadata: MPropertyFriendlyName "Vsnd 13"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot13; // 0x6d8            
            // metadata: MPropertyFriendlyName "Vsnd 14"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot14; // 0x760            
            // metadata: MPropertyFriendlyName "Vsnd 15"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot15; // 0x7e8            
            // metadata: MPropertyFriendlyName "Vsnd 16"
            source2sdk::soundsystem_voicecontainers::CVsndTriggerSlot m_slot16; // 0x870            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerVsndTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerVsndTrigger) == 0x8f8);
    };
};
