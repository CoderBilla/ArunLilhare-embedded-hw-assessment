uint16_t adc_read_average_mv(void)
{
    uint32_t sum = 0;
    uint32_t i;
    
    for(i = 0; i < NUM_SAMPLES; i++)
    {
        sum += ADC_DR;
    }
    
    uint32_t avg = sum / NUM_SAMPLES;
    return (uint16_t)((avg * ADC_VREF_MV) / ADC_RESOLUTION);
}
