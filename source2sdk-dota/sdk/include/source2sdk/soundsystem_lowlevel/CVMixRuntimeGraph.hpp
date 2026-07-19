#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/CVMixAdditionalOutput.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixAudioMeter.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixAutomaticControlInput.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixBaseProcessorDesc.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixCommand.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixControlInput.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixControlInputArray.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixControlMeter.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixControlOutput.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixCurveHeader.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixImpulseResponseInput.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixNameInput.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixNameInputMeter.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixSubmix.hpp"
#include "source2sdk/soundsystem_lowlevel/CVMixVsndInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x200
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CVMixRuntimeGraph
        {
        public:
            // metadata: MKV3TransferName "Name"
            CUtlString m_name; // 0x0            
            std::int32_t m_nGraphOutputChannels; // 0x8            
            bool m_bIsMainGraph; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            // metadata: MKV3TransferName "m_Submixes"
            // m_submixes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixSubmix> m_submixes;
            char m_submixes[0x18]; // 0x10            
            // metadata: MKV3TransferName "m_Processors"
            // m_processorNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std_unique_ptr<source2sdk::soundsystem_lowlevel::CVMixBaseProcessorDesc>> m_processorNodes;
            char m_processorNodes[0x18]; // 0x28            
            // m_controlInputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixControlInput> m_controlInputs;
            char m_controlInputs[0x18]; // 0x40            
            // m_controlTransientInputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixControlInput> m_controlTransientInputs;
            char m_controlTransientInputs[0x18]; // 0x58            
            // m_controlInputArrays has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixControlInputArray> m_controlInputArrays;
            char m_controlInputArrays[0x18]; // 0x70            
            // m_controlOutputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixControlOutput> m_controlOutputs;
            char m_controlOutputs[0x18]; // 0x88            
            // m_nameInputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixNameInput> m_nameInputs;
            char m_nameInputs[0x18]; // 0xa0            
            // m_vsndInputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixVsndInput> m_vsndInputs;
            char m_vsndInputs[0x18]; // 0xb8            
            // m_impulseResponseInputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixImpulseResponseInput> m_impulseResponseInputs;
            char m_impulseResponseInputs[0x18]; // 0xd0            
            // metadata: MKV3TransferName "m_MixCommands"
            // m_mixCommands has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixCommand> m_mixCommands;
            char m_mixCommands[0x18]; // 0xe8            
            // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_values;
            char m_values[0x18]; // 0x100            
            // m_valueArrays has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlVector<float>> m_valueArrays;
            char m_valueArrays[0x18]; // 0x118            
            // m_impulseResponseValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint64_t> m_impulseResponseValues;
            char m_impulseResponseValues[0x18]; // 0x130            
            // m_controlPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_controlPoints;
            char m_controlPoints[0x18]; // 0x148            
            // m_curves has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixCurveHeader> m_curves;
            char m_curves[0x18]; // 0x160            
            // m_audioMeters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixAudioMeter> m_audioMeters;
            char m_audioMeters[0x18]; // 0x178            
            // m_controlMeters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixControlMeter> m_controlMeters;
            char m_controlMeters[0x18]; // 0x190            
            // m_nameInputMeters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixNameInputMeter> m_nameInputMeters;
            char m_nameInputMeters[0x18]; // 0x1a8            
            // m_additionalOutputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixAdditionalOutput> m_additionalOutputs;
            char m_additionalOutputs[0x18]; // 0x1c0            
            // m_automaticControlInputs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem_lowlevel::CVMixAutomaticControlInput> m_automaticControlInputs;
            char m_automaticControlInputs[0x18]; // 0x1d8            
            KeyValues3 m_sources; // 0x1f0            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_name) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_nGraphOutputChannels) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_bIsMainGraph) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_submixes) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_processorNodes) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_controlInputs) == 0x40);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_controlTransientInputs) == 0x58);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_controlInputArrays) == 0x70);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_controlOutputs) == 0x88);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_nameInputs) == 0xa0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_vsndInputs) == 0xb8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_impulseResponseInputs) == 0xd0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_mixCommands) == 0xe8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_values) == 0x100);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_valueArrays) == 0x118);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_impulseResponseValues) == 0x130);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_controlPoints) == 0x148);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_curves) == 0x160);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_audioMeters) == 0x178);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_controlMeters) == 0x190);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_nameInputMeters) == 0x1a8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_additionalOutputs) == 0x1c0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_automaticControlInputs) == 0x1d8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph, m_sources) == 0x1f0);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::CVMixRuntimeGraph) == 0x200);
    };
};
